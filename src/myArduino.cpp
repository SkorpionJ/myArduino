#include "myArduino.h"

void digitalWrite(uint8_t pin, uint8_t value)
{
  if (value == HIGH)
  {
    PORTB |= (1 << pin);
  }
  else
  {
    PORTB &= ~(1 << pin);
  }
}

void pinMode(uint8_t pin, uint8_t mode)
{
  if (mode == OUTPUT)
  {
    DDRB |= (1 << pin);
  }
  else
  {
    DDRB &= ~(1 << pin);
  }
}