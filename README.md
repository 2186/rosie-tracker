# rosie-tracker

## Introduction


Tracking wildlife effectively is essential for conservation efforts, ecological research, and behavioral studies. By using an ESP32 microcontroller in combination with a GY-521 (MPU6050) accelerometer and gyroscope, a pulse heartbeat sensor, and a GPS module, it's possible to build a compact and efficient system that monitors both movement and physiological responses in animals. The ESP32 acts as the central unit, collecting data from each sensor. The GY-521 module captures 3-axis motion and orientation, which helps identify behavior patterns like walking, running, or resting. Meanwhile, the pulse sensor monitors the animal’s heart rate, offering insights into stress levels, excitement, or periods of calm. The GPS module records the animal’s real-time location with timestamps, allowing researchers to map movement patterns over time. This combination of data provides a detailed view of the animal’s physical activity and emotional state in relation to its environment. The system can log data locally to an SD card or wirelessly transmit it via Wi-Fi or Bluetooth, depending on connectivity. Its lightweight design makes it suitable for small to medium-sized animals without impeding their natural behavior. Power efficiency is a key feature, with the ESP32 supporting deep-sleep modes to extend battery life in field deployments. This setup can be further enhanced with solar charging, long-range communication options like LoRa, and machine learning algorithms to classify behaviors in real time. Overall, the integration of movement, physiological, and location data provides a powerful tool for modern wildlife monitoring.

<img width="121" alt="small" src="https://github.com/user-attachments/assets/bab0332a-2ed7-4c02-9643-1638bb3119a0" />

The tracker is designed to confortablty sit inside of a 100mm x 70mm box that can be noninvasivelty attacked to an animal. 

Goal
The goal of our project was to make a wilflife tracker that could be non ivasively attacked to an anaimals that will send research data about it location, movement, stress , and health. The data from the device will be sent to a data base using a wireless communication rpotcol like wifi or lora to a cloud data base (oracle cloud) where it can be feed to an AI for analyis or directly analysed by researchers on a webpage. 

Accopmplishements
We were able to to complete the hardware portion of the project and get a working gps tracker, heartbeat sensor, temperature sensor, accelerometer, and gyro. We were also able to design and 3d print a case for the electronics that can eb mounted to an animal. 

Future Development
During the hackathon we attempted but were not to sucessfully implement a wordpress website that was hosted on Oracle cloud that would contain the raw data recieved through the tracker. We would have also like to experment with trying to create an Ai model that can read and reconize patterns in the animals behavior such as locations most frequented and stress levels over time. 


