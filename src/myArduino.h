/*
  MyArduino - A simple Arduino-like library for AVR microcontrollers.

  Author: Jakob Hillebrand
  Date:   13.11.2026
*/
#pragma once

#define HIGH 1
#define LOW 0
#define OUTPUT 1
#define INPUT 0

#include <avr/io.h>
#include <util/delay.h>

void digitalWrite(uint8_t pin, uint8_t value);
void pinMode(uint8_t pin, uint8_t mode);