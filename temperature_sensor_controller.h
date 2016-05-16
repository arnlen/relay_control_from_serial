/*
 *
 * Arnlen
 * Send temperature sensor's value through serial
 *
 */

#include <Arduino.h>

int sensorPin = 1;
int sensorValue;

void transfertTemperatureSensor() {
  sensorValue = analogRead(sensorPin);

  float voltage = sensorValue * 5.0;
  voltage /= 1024.0;

  float temperatureC = (voltage - 0.5) * 10;
  
  String jsonBaseString = "{'sensor': 'temperature', 'value': ";
  String jsonString = jsonBaseString + "'" + temperatureC + "'}";

  Serial.println(jsonString);
}
