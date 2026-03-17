# Predictive Maintenance with Edge AI (STM32)
**Compte Rendu de Projet - IA Embarquée**
> **Authors:** Sofia Castrillon Bayona & João Vitor Apis Bigoloti
>
> **Institution:** École Nationale Supérieure des Mines de Saint-Étienne (EMSE - ISMIN)
> 
> **Course/Project:** IA Embarquée (Embedded AI)  

## 1. Project Overview

With the rise of Industry 4.0, predictive maintenance has become a critical component of manufacturing. Replacing an entire machine is significantly more expensive than replacing a single worn-out component. By leveraging sensor data (IoT) and Artificial Intelligence, we can predict catastrophic failures before they occur.

This project focuses on designing, training, and deploying a Deep Neural Network (DNN) for predictive maintenance. Using the **AI4I 2020 Predictive Maintenance Dataset**, the goal is to predict 5 different types of machine failures based on sensor data (temperature, rotational speed, torque, tool wear) and deploy this model onto a resource-constrained microcontroller (**STM32L4R9**) using **STM32Cube.AI**.

Our approach specifically addresses the critical challenges of industrial datasets: extreme class imbalance and the hardware constraints of TinyML deployment.

## 2. Repository Structure
We utilized a professional Git workflow to maintain a clean and scalable codebase:

```text
├── dataset/
│   └── ai4i2020.csv                 # Original AI4I 2020 Dataset
├── models/
│   ├── modelo_mantenimiento.h5      # Legacy Keras format (TF 2.12 fallback)
│   └── modelo_mantenimiento.tflite  # Optimized for STM32Cube.AI deployment
├── notebooks/
│   └── TP_IA_EMBARQUEE.ipynb        # Data preprocessing, training, and evaluation
└── README.md                        # Project Report
```

## 3. Data Preprocessing & Methodology
The model utilizes the AI4I 2020 Predictive Maintenance Dataset (10,000 instances, 14 features). To ensure the model learns true physical patterns, strict preprocessing was applied.

### 3.1 Data Cleaning & Anomaly Removal
During our exploratory data analysis, we identified two contradictory labels that would confuse the neural network's gradient descent:
* **Unclassified Failures:** We removed instances where `Machine failure = 1` but no specific failure type (TWF, HDF, PWF, OSF, RNF) was indicated.
* **Ghost Failures:** We removed instances where a specific failure was triggered (e.g., `RNF = 1`) but the global `Machine failure` was `0`.

### 3.2 Feature Scaling
Sensor readings vary drastically in magnitude (e.g., Rotational speed in RPM vs. Torque in Nm). For that reason we applied `StandardScaler` to normalize the inputs, ensuring mathematical stability and faster convergence during training.

### 3.3 Handling Extreme Class Imbalance
In real-world predictive maintenance, failures are extremely rare (constituting less than 4% of our dataset). 
* **The Problem:** Standard training results in a "lazy" model that achieves 96% accuracy by simply predicting "No Error" every time.
* **Our Solution (`RandomOverSampler`):** Instead of using Undersampling (which destroys valuable baseline data from healthy machines), we applied Random Oversampling exclusively to the minority failure classes. This forced the network to heavily penalize missing a failure, preserving 100% of the real-world operational baseline.

## 4. Model Architecture & Threshold Optimization
We designed a lightweight Multi-Label Deep Neural Network (DNN) tailored for Edge AI.

### 4.1 The 0.3 Decision Threshold (Industrial Strategy)
The default classification threshold in Machine Learning is `0.5` (50% certainty). However, in the manufacturing industry, missing a catastrophic failure is vastly more expensive than conducting a preventative check.

We deliberately lowered the decision threshold to `0.3`. 
By making the model highly sensitive to early warning signs, we traded a small decrease in *Precision* (tolerating more false alarms) for a massive spike in *Recall* (catching almost every true failure).

### 4.2 Final Model Performance
The application of the `0.3` threshold on the balanced model yielded the following results on the unseen Test Set (real-world validation):

| Failure Type | Precision | Recall (Detection Rate) | F1-Score | Support | Status |
| :--- | :---: | :---: | :---: | :---: | :--- |
| **TWF** (Tool Wear) | 0.11 | **0.64** | 0.19 | 11 | *Massive improvement from 0.00* |
| **HDF** (Heat Dissipation)| 0.57 | **1.00** | 0.72 | 17 | *Perfect Detection (100%)* |
| **PWF** (Power Failure) | 0.66 | **0.95** | 0.78 | 20 | *Excellent Reliability* |
| **OSF** (Overstrain) | 0.74 | **0.94** | 0.83 | 18 | *High Detection Rate* |
| **RNF** (Random Failure)| 0.00 | **0.00** | 0.00 | 6 | *Theoretical Limit (See below)* |

### 4.3 The "RNF" Anomaly (Analytical Conclusion)
Despite oversampling, the RNF (Random Failure) class maintained a 0.00 Recall. We conclude that this is not a model deficiency, but a theoretical limit of supervised learning. By definition, truly random failures do not follow a predictable mathematical pattern in sensor data. A machine learning model cannot reliably predict pure randomness.

## 5. Edge AI Deployment (STM32CubeIDE)
Deploying deep learning models to microcontrollers requires a deep understanding of the hardware's physical limitations and memory management.

### 5.1 Hardware Overview: STM32L4R9 Microcontroller
To prove that predictive maintenance can be executed entirely on the edge, we deployed our model onto the **STM32L4R9** board. This specific hardware was chosen for its optimal balance of power and efficiency:
* **Core Architecture:** Arm® Cortex®-M4 with an integrated FPU (Floating-Point Unit). The FPU is absolutely critical for accelerating the complex matrix multiplications required by the neural network during real-time inference.
* **Memory Capacity:** 2 MB of Flash memory (ROM) and 640 KB of SRAM. This provides ample space to store our DNN weights and handle the input/output sensor buffers without needing external memory chips.
* **Ultra-Low-Power Profile:** Designed for energy-efficient IoT applications, demonstrating that AI can run continuously on battery-powered industrial sensors on a factory floor.

### 5.2 TensorFlow Versioning Strategy
Newer versions of TensorFlow (>2.12) modify the internal serialization of the `Input shape` (dynamic batch sizing). This causes static memory allocation conflicts within `STM32Cube.AI`, which requires a strict inference batch size of `1`. 
To guarantee a seamless C/C++ conversion, we exported our model as a `.tflite` (TensorFlow Lite) file, which is the modern standard for Edge AI and natively bypasses Cube.AI's batch-size conflicts.

### 5.3 STM32 Integration (Work in Progress)

## 6. Conclusion & Future Work
