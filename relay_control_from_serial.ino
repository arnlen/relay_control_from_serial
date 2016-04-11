/*
  Arnlen
  Control a relay state from serial commands.
 */

const int RELAY = 7; // relay on pin 7
boolean relayState = 0; // relay state (on / off)

void setup() {
  pinMode(RELAY, OUTPUT);

  Serial.begin(9600);
  while (!Serial) { }
}

void loop() {
  int message = Serial.read()-'0';

  if (message != -49) {
    Serial.println(message);

    if (message == 1 || message == 0) {
      relayState = message;
      digitalWrite(RELAY, relayState);
    }
  }
  delay(1000); // delay in between reads for stability
}
