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
