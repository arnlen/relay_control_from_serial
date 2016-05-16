/*
 *
 * Arnlen
 * A set of programs to control device conntected to an Arduino
 * through serial
 *
 */

#include <LiquidCrystal.h>
#include "relay_controller.h"
#include "lcd_controller.h"
#include "temperature_sensor_controller.h"

void setup() {
  setupRelay();
  setupLcd();

  Serial.begin(9600);      // Must match the Rails SERIAL_BAUD_RATE config
  while (!Serial) { delay(5); }      // Wait for serial communication to be ready
}

void loop() {
  String message = Serial.readString();

  if (message != "") {
    Serial.println(message);         // Output on serial for debug purpose

    displaySerialData(message);
    activateTheRelay(message);
  }

  transfertTemperatureSensor();

  delay(1000); // wait for 1 second before every loop
}
