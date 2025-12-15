#define BLYNK_TEMPLATE_ID "TMPL3KDixjqGA"
#define BLYNK_TEMPLATE_NAME "Smart irrigation monitoring system"
#define BLYNK_AUTH_TOKEN "YOUR_BLYNK_AUTH_TOKEN"
#include <BlynkSimpleEsp32.h>
#include <DHT.h>


#define DHTPIN 15  // DHT11 data pin connected to GPIO15
#define DHTTYPE DHT11  // DHT 11 sensor

#define ENA 23  // PWM control for motor driver
#define IN1 22  // Direction control
#define IN2 21  // Direction control
#define MOISTURE_SENSOR_PIN 34  // Soil moisture sensor connected to analog pin (GPIO34)
#define MOISTURE_THRESHOLD_PERCENTAGE 50  // Threshold moisture percentage for turning on pump



// Initialize DHT sensor
DHT dht(DHTPIN, DHTTYPE);  // Initialize DHT sensor

// Blynk virtual pin setup
BlynkTimer timer;

void setup() {
  // Set pins as output
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  
  // Initialize the motor as OFF
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 0); // PWM duty cycle = 0

  // Start the Serial Monitor
  Serial.begin(115200);

  // Initialize Blynk
  Blynk.begin(BLYNK_AUTH_TOKEN, "YOUR_WIFI_NAME", "YOUR_WIFI_PASSWORD");

  // Initialize DHT sensor
  dht.begin();

  // Set up a timer to send data to Blynk at intervals
  timer.setInterval(1000L, sendSensorDataToBlynk); // send data every 1 second
}

void loop() {
  // Run the Blynk run function
  Blynk.run();

  // Run the Blynk timer
  timer.run();
}

void sendSensorDataToBlynk() {
  // Read the soil moisture level (value from 0 to 4095)
  int moistureLevel = analogRead(MOISTURE_SENSOR_PIN);

  // Convert moisture level to percentage (0 to 100%)
  float moisturePercentage = (moistureLevel / 4095.0) * 100;

  // Read temperature and humidity from DHT11 sensor
  float temperature = dht.readTemperature();  // Temperature in Celsius
  float humidity = dht.readHumidity();  // Humidity in %

  // Check if any read failed and exit early (NaN means failed reading)
  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Print moisture, temperature, and humidity readings to Serial Monitor
  Serial.print("Soil Moisture Percentage: ");
  Serial.println(moisturePercentage);
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println("°C");
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println("%");

  // Send data to Blynk virtual pins
  Blynk.virtualWrite(V0, moisturePercentage);  // Send soil moisture to Virtual Pin V0
  Blynk.virtualWrite(V2, temperature);         // Send temperature to Virtual Pin V2
  Blynk.virtualWrite(V3, humidity);            // Send humidity to Virtual Pin V3

  // Check if the moisture level is below the threshold
  if (moisturePercentage > MOISTURE_THRESHOLD_PERCENTAGE) {
    // Turn the pump on (forward direction)
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW); // Forward direction
    analogWrite(ENA, 128); // Set PWM duty cycle to 50% (adjust speed as needed)
    Blynk.virtualWrite(V1, 1);  // Turn on water pump switch on Blynk (Virtual Pin V1)
    Serial.println("Pump is ON - Moisture Level is below threshold.");
  } else {
    // Turn the pump off
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW); // Motor stops
    analogWrite(ENA, 0);    // PWM duty cycle = 0
    Blynk.virtualWrite(V1, 0);  // Turn off water pump switch on Blynk (Virtual Pin V1)
    Serial.println("Pump is OFF - Moisture Level is above threshold.");
    delay(500);
  }
}
