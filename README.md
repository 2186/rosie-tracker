# rosie-tracker

## Introduction

![image](https://github.com/user-attachments/assets/86ce6d36-7184-417e-b65b-6852fb91504b)




Tracking wildlife effectively is essential for conservation efforts, ecological research, and behavioral studies. By using an ESP32 microcontroller in combination with a GY-521 (MPU6050) accelerometer and gyroscope, a pulse heartbeat sensor, and a GPS module, it's possible to build a compact and efficient system that monitors both movement and physiological responses in animals. The ESP32 acts as the central unit, collecting data from each sensor. The GY-521 module captures 3-axis motion and orientation, which helps identify behavior patterns like walking, running, or resting. Meanwhile, the pulse sensor monitors the animal’s heart rate, offering insights into stress levels, excitement, or periods of calm. The GPS module records the animal’s real-time location with timestamps, allowing researchers to map movement patterns over time. This combination of data provides a detailed view of the animal’s physical activity and emotional state in relation to its environment. The system can log data transmit it via Wi-Fi or Lora. Its lightweight design makes it suitable for small to medium-sized animals without impeding their natural behavior. Power efficiency is a key feature, with the ESP32 supporting deep-sleep modes to extend battery life in field deployments. This setup can be further enhanced with solar charging, long-range communication options like LoRa, and machine learning algorithms to classify behaviors in real time. Overall, the integration of movement, physiological, and location data provides a powerful tool for modern wildlife monitoring.

<img width="121" alt="small" src="https://github.com/user-attachments/assets/bab0332a-2ed7-4c02-9643-1638bb3119a0" />

The tracker is designed to confortablty sit inside of a 100mm x 70mm box that can be noninvasivelty attacked to an animal. 

![image](https://github.com/user-attachments/assets/7eaf9fdd-d269-460c-bda9-65b4d7fed045)


## Goal
The goal of our project was to make a wildlife tracker that could be non invasively attacked to an animal that sends researchers data about it location, movement, stress , and health. The data from the device will be sent to a data base using a wireless communication protocol such as wifi or lora to a cloud data base (oracle cloud) where it can be feed to an AI for analyis or directly analysed by researchers on a webpage. 

## Accopmplishements - 
We’re excited to share that Rosie Wildlife Tracker won 3rd Place at Hackfax 2025 under the theme "A Better World"!

Our team successfully demonstrated a working prototype that combines:
- Real-time GPS tracking
- Heartbeat monitoring for stress detection
- Motion sensing using accelerometer and gyroscope
- A 3D-printed, animal-mountable case
- A centralized system for wireless data transmission and visualization via Oracle Cloud

🌱 This recognition validates our mission to build smarter, low-cost tools for wildlife conservation. We’re grateful for the opportunity to present, learn, and collaborate — and we're excited to continue developing Rosie into a deployable field-ready system.
![image](https://github.com/user-attachments/assets/a17464b2-e618-4d05-837e-99fe4a906af3)

## Future Development 
During the hackathon we attempted but were not to sucessfully implement a wordpress website that was hosted on Oracle cloud that would contain the raw data recieved through the tracker. We would have also like to experment with trying to create an Ai model that can read and reconize patterns in the animals behavior such as locations most frequented and stress levels over time. 


