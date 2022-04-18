#include <Arduino.h>

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(20, OUTPUT);
  digitalWrite(18, HIGH);
  digitalWrite(19, HIGH);
  digitalWrite(20, HIGH);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(20, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(20, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}