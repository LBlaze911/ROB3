//morse class definition


#include "morse.h"
#include <Arduino.h>

morse::morse(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

morse::morse()
{
  pinMode(LED_BUILTIN, OUTPUT);
  _pin = LED_BUILTIN;
}

void morse::dot()
{
  digitalWrite(_pin, HIGH);
  delay(250);
  digitalWrite(_pin, LOW);
  delay(250);
}

void morse::dash()
{
  digitalWrite(_pin, HIGH);
  delay(1000);
  digitalWrite(_pin, LOW);
  delay(250);
}

void morse::space()
{
  digitalWrite(_pin, LOW);
  delay(2000);
}
