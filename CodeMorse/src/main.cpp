//morse code blink on the LED_BUILTIN

#include <Arduino.h>

#include "morse.h"
morse m=morse(LED_BUILTIN);

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  m.dot();
  m.dot();
  m.dot();
  m.space();
  m.dash();
  m.dash();
  m.dash();
  m.space();
  m.dot();
  m.dot();
  m.dot();
  m.space();
  delay(10000);
}