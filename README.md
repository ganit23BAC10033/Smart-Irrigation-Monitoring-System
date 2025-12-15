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

* Soil Moisture Sensor (Analog)
* DHT11 (Temperature & Humidity)

### Actuators

* DC Water Pump
* **Motor Driver Module (L298N / equivalent)**

### Connectivity

* Wi‑Fi (Built‑in ESP32 Wi‑Fi)

### Power Supply

* 5V (ESP32) / 12V (Motor Pump)

---

## 💻 Software & Platform

* Arduino IDE
* **Blynk Cloud**
* **Blynk Mobile Application**

 

## 🛠️ How It Works

### 🌾 Soil Moisture Based Automatic Irrigation

* The soil moisture sensor provides an analog value (0–4095) to the ESP32.
* This value is converted into a **percentage**.
* If the moisture percentage indicates **dry soil (above threshold)**, the motor turns **ON automatically**.
* When sufficient moisture is detected, the motor turns **OFF** to prevent over‑watering.

### 📱 Manual Motor Control Using Blynk App

* A **virtual button (V1)** is configured in the Blynk application.
* The user can manually turn the water motor **ON or OFF** using the mobile app.
* Manual control can override automatic irrigation when needed.

### 🌡️ Temperature & Humidity Monitoring

* The **DHT11 sensor** measures temperature and humidity.
* Values are sent to Blynk Cloud and displayed in real time:

  * Temperature → **V2**
  * Humidity → **V3**

### ☁️ IoT-Based Monitoring via Blynk Cloud

* ESP32 sends sensor data to **Blynk Cloud** using Wi‑Fi.
* Soil moisture level is displayed on **Virtual Pin V0**.
* The system can be monitored and controlled remotely from anywhere.

---

## 📸 Proof of Working

>  

* ![Smart_Irrigation_Monitoring_System_photo3](https://github.com/user-attachments/assets/45616702-89f9-4aa5-9447-7046473de9bf)

* ![Smart_Irrigation_Monitoring_System_photo2](https://github.com/user-attachments/assets/872101d5-ccb2-45bf-a4bf-9986fd16bafc)

* ![Smart_Irrigation_Monitoring_System_photo1](https://github.com/user-attachments/assets/5116932f-2468-4148-a43d-27a83e7626ba)


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

 

 
