/*
    Project name : ESP8266 Turbidity sensor Particle Sensor
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-turbidity-sensor-particle-sensor
*/

const int turbiditySensorPin = A0; // Analog pin connected to the turbidity sensor
const int turbidityThreshold = 500; // Adjust this threshold based on sensor calibration

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the analog value from the turbidity sensor
  int turbidityValue = analogRead(turbiditySensorPin);

  // Print the turbidity value to the Serial Monitor
  Serial.print("Turbidity Value: ");
  Serial.println(turbidityValue);

  // Check if water is dirty based on threshold
  if (turbidityValue > turbidityThreshold) {
    Serial.println("Water is dirty!");
  } else {
    Serial.println("Water is clean.");
  }

  // Add a delay before the next reading
  delay(1000);
}
