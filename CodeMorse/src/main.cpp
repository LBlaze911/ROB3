//morse code blink on the LED_BUILTIN

#include <Arduino.h>

#include "morse.cpp"
#include "morse.h"
#include "translator.cpp"
#include "translator.h"



void setup() {
  Serial.begin(9600);
  Serial.println("Entrez votre message")
  cout << "message : " <<msg << endl
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
}