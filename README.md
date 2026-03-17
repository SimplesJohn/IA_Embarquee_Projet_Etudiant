# Predictive Maintenance with Edge AI (STM32)
**Compte Rendu de Projet - IA Embarquée**
> **Authors:** Sofia Castrillon Bayona & João Vitor Apis Bigoloti
>
> **Institution:** École Nationale Supérieure des Mines de Saint-Étienne (EMSE - ISMIN)
> 
> **Course/Project:** IA Embarquée (Embedded AI)  

## 📌 Project Overview

With the rise of Industry 4.0, predictive maintenance has become a critical component of manufacturing. Replacing an entire machine is significantly more expensive than replacing a single worn-out component. By leveraging sensor data (IoT) and Artificial Intelligence, we can predict catastrophic failures before they occur.

This project focuses on designing, training, and deploying a Deep Neural Network (DNN) for predictive maintenance. Using the **AI4I 2020 Predictive Maintenance Dataset**, the goal is to predict 5 different types of machine failures based on sensor data (temperature, rotational speed, torque, tool wear) and deploy this model onto a resource-constrained microcontroller (**STM32L4R9**) using **STM32Cube.AI**.

Our approach specifically addresses the critical challenges of industrial datasets: extreme class imbalance and the hardware constraints of TinyML deployment.

## 🗂️ 2. Repository Structure
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




