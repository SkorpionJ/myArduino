/*
  MyArduino - A simple Arduino-like library for AVR microcontrollers.

  Author: Jakob Hillebrand
  Date:   13.11.2026
*/
#pragma once

#include <avr/io.h>
#include <util/delay.h>

//Output States
#define HIGH 1
#define LOW 0

// Pin Modes
#define OUTPUT 1
#define INPUT 0

//Pins
//Port B
#define PINB0 0
#define PINB1 1
#define PINB2 2
#define PINB3 3
#define PINB4 4
#define PINB5 5
#define PINB6 6
#define PINB7 7
//Port C
#define PINC0 0
#define PINC1 1
#define PINC2 2
#define PINC3 3
#define PINC4 4
#define PINC5 5
//Port D
#define PIND0 0
#define PIND1 1
#define PIND2 2
#define PIND3 3
#define PIND4 4
#define PIND5 5
#define PIND6 6
#define PIND7 7

void digitalWrite(uint8_t port, uint8_t pin, uint8_t value);
void pinMode(uint8_t port, uint8_t pin, uint8_t mode);