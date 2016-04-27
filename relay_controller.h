/*
 *
 * Arnlen
 * Controle the relay through serial inputs
 *
 */

#include <Arduino.h>

const int RELAY = 7;       // relay on pin 7
boolean relay_state = 0;    // relay state (on / off)

void setup_relay() {
  pinMode(RELAY, OUTPUT);
}

void activate_the_relay(String message) {
  if (message == "1" || message == "0") {
    relay_state = message;
    digitalWrite(RELAY, relay_state); // Write to relay
  }
}
