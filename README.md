# 🌱 Smart Irrigation Monitoring System

An IoT-based irrigation system that monitors soil and environmental conditions and allows **remote control of the water motor using Blynk Cloud**. The project helps conserve water and ensures healthy plant growth by automating irrigation and providing manual control through a mobile application.

---

## 📌 Features

* ✅ **Soil Moisture Monitoring**: Continuously monitors soil moisture level in real time.
* ✅ **Automatic Irrigation Control**: Automatically turns the water motor ON/OFF based on a predefined soil moisture threshold.
* ✅ **Manual Motor Control via App**: User can manually turn the motor ON or OFF using the **Blynk mobile application**.
* ✅ **Temperature & Humidity Monitoring**: Uses **DHT11** sensor to monitor environmental conditions.
* ✅ **IoT-Based Monitoring**: Live sensor data is displayed on the Blynk dashboard.
* ✅ **Remote Access**: System can be monitored and controlled from anywhere using the internet.

---

## 🛠️ Hardware Components

* **Microcontroller**: ESP32

### Sensors

* Soil Moisture Sensor
* DHT11 (Temperature & Humidity)

### Actuators

* Water Pump / Motor
* Relay Module

### Connectivity

* Wi‑Fi (Built‑in ESP32 Wi‑Fi)

### Power Supply

* 5V / 12V (as required)

---

## 💻 Software & Platform

* Arduino IDE
* **Blynk Cloud**
* **Blynk Mobile Application**

---

## 🛠️ How It Works

### 🌾 Soil Moisture Based Automatic Irrigation

* When the soil moisture level falls below the set threshold, the **water motor turns ON automatically**.
* Once sufficient moisture is detected, the **motor turns OFF**, preventing over‑irrigation.

### 📱 Manual Motor Control Using Blynk App

* A **virtual button** is configured in the Blynk app.
* User can manually **turn the motor ON/OFF** from the mobile application anytime.

### 🌡️ Temperature & Humidity Monitoring

* The **DHT11 sensor** measures temperature and humidity.
* These values are displayed live on the **Blynk dashboard**.

### ☁️ IoT-Based Monitoring via Blynk Cloud

* ESP32 sends sensor data to **Blynk Cloud** using Wi‑Fi.
* User can monitor and control the system **from anywhere**.

---

## 📸 Proof of Working

>  

* ![Smart_Irrigation_Monitoring_System_photo3](https://github.com/user-attachments/assets/35519fe8-b298-48ed-937e-040dd20ae713)

* ![Smart_Irrigation_Monitoring_System_photo2](https://github.com/user-attachments/assets/d78283b0-bf66-467f-9119-4e73911b482a)

* ![Smart_Irrigation_Monitoring_System_photo1](https://github.com/user-attachments/assets/2967d5a5-f1c1-4abc-8956-ef5a63ab2dad)


---

## 🎥 Demo Video

```
[https://your-video-link-here](https://drive.google.com/file/d/1jen30hEVT8F9dcb2YdfWV91jdFH5wXtY/view?usp=sharing)
```

---

## 🚀 Applications

* Smart Agriculture
* Home Gardening Automation
* Greenhouse Monitoring
* Water Conservation Systems

---

## 📄 Conclusion

The **Smart Irrigation Monitoring System** provides an efficient and reliable solution for modern irrigation needs. By combining real‑time monitoring, automation, and manual control using Blynk Cloud, the system reduces water wastage and improves crop health.

---

 
