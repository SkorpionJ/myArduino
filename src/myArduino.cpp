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
      DDRB &= ~(1 << pin);
      PORTB &= ~(1 << pin);
      if (mode == OUTPUT)
      {
        DDRB |= (1 << pin);
      }
      else if (mode == INPUT_PULLUP)
      {
        PORTB |= (1 << pin);
      }
      break;
    case PORT_C:
      DDRC &= ~(1 << pin);
      PORTC &= ~(1 << pin);
      if (mode == OUTPUT)
      {
        DDRC |= (1 << pin);
      }
      else if (mode == INPUT_PULLUP)
      {
        PORTC |= (1 << pin);
      }
      break;
    case PORT_D:
      DDRD &= ~(1 << pin);
      PORTD &= ~(1 << pin);
      if (mode == OUTPUT)
      {
        DDRD |= (1 << pin);
      }
      else if (mode == INPUT_PULLUP)
      {
        PORTD |= (1 << pin);
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

bool digitalread(uint8_t port, uint8_t pin)
{
  switch (port)
  {
    case PORT_B:
      return (PINB & (1 << pin)) != 0;
    case PORT_C:
      return (PINC & (1 << pin)) != 0;
    case PORT_D:
      return (PIND & (1 << pin)) != 0;
    default:
      // Invalid port, return false or handle error
      return false;
  }
}