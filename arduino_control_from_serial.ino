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

void setup() {
  setup_relay();
  setup_lcd();

  Serial.begin(9600);      // Must match the Rails SERIAL_BAUD_RATE config
  while (!Serial) { delay(5); }      // Wait for serial communication to be ready
}

void loop() {
  int message = Serial.readString();
  Serial.println(message);         // Output on serial for debug purpose

  display_serial_data(message);
  activate_the_relay(message);

  delay(1000); // wait for 1 second before every loop
}
