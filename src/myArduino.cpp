#include "myArduino.h"

void digitalWrite(uint8_t port, uint8_t pin, uint8_t value)
{
  switch (port)
  {
    case PORT_B:
      if (value == HIGH)
      {
        PORTB |= (1 << pin);
      }
      else
      {
        PORTB &= ~(1 << pin);
      }
      break;
    case PORT_C:
      if (value == HIGH)
      {
        PORTC |= (1 << pin);
      }
      else
      {
        PORTC &= ~(1 << pin);
      }
      break;
    case PORT_D:
      if (value == HIGH)
      {
        PORTD |= (1 << pin);
      }
      else
      {
        PORTD &= ~(1 << pin);
      }
      break;
    default:
      // Invalid port, do nothing or handle error
      break;
  }
}

void pinMode(uint8_t port, uint8_t pin, uint8_t mode)
{
  switch (port)
  {
    case PORT_B:
      if (mode == OUTPUT)
      {
        DDRB |= (1 << pin);
      }
      else
      {
        DDRB &= ~(1 << pin);
      }
      break;
    case PORT_C:
      if (mode == OUTPUT)
      {
        DDRC |= (1 << pin);
      }
      else
      {
        DDRC &= ~(1 << pin);
      }
      break;
    case PORT_D:
      if (mode == OUTPUT)
      {
        DDRD |= (1 << pin);
      }
      else
      {
        DDRD &= ~(1 << pin);
      }
      break;
    default:
      // Invalid port, do nothing or handle error
      break;
  }
}

void delay(uint32_t milliseconds)
{
  _delay_ms(milliseconds);
}