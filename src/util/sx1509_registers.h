/******************************************************************************
sx1509_registers.h
Register definitions for SX1509.
Jim Lindblom @ SparkFun Electronics
Original Creation Date: September 21, 2015
https://github.com/sparkfun/SparkFun_SX1509_Arduino_Library

Here you'll find the Arduino code used to interface with the SX1509 I2C
16 I/O expander. There are functions to take advantage of everything the
SX1509 provides - input/output setting, writing pins high/low, reading
the input value of pins, LED driver utilities (blink, breath, pwm), and
keypad engine utilites.

Development environment specifics:
	IDE: Arduino 1.6.5
	Hardware Platform: Arduino Uno
	SX1509 Breakout Version: v2.0

This code is beerware; if you see me (or any other SparkFun employee) at the
local, and you've found our code helpful, please buy us a round!

Distributed as-is; no warranty is given.
******************************************************************************/

#include <stdint.h>

// Device and IO Banks
#define REG_INPUT_DISABLE 0x00
#define REG_LONG_SLEW 0x01
#define REG_LOW_DRIVE 0x02
#define REG_PULL_UP 0x03
#define REG_PULL_DOWN 0x04
#define REG_OPEN_DRAIN 0x05
#define REG_POLARITY 0x06
#define REG_DIR 0x07
#define REG_DATA 0x08
#define REG_INTERRUPT_MASK 0x09
#define REG_SENSE_HIGH 0x0A
#define REG_SENSE_LOW 0x0B
#define REG_INTERRUPT_SOURCE 0x0C
#define REG_EVENT_STATUS 0x0D
#define REG_LEVEL_SHIFTER 0x0E
#define REG_CLOCK 0x0F
#define REG_MISC 0x10
#define REG_LED_DRIVER_ENABLE 0x11
// Debounce and Keypad Engine
#define REG_DEBOUNCE_CONFIG 0x12
#define REG_DEBOUNCE_ENABLE 0x13
#define REG_KEY_CONFIG 0x14
#define REG_KEY_DATA 0x15
// LED Driver (PWM, blinking, breathing)
#define REG_I_ON_0 0x16
#define REG_I_ON_1 0x17
#define REG_T_ON_2 0x18
#define REG_I_ON_2 0x19
#define REG_OFF_2 0x1A
#define REG_T_ON_3 0x1B
#define REG_I_ON_3 0x1C
#define REG_OFF_3 0x1D
#define REG_T_RISE_3 0x1E
#define REG_T_FALL_3 0x1F
#define REG_I_ON_4 0x20
#define REG_I_ON_5 0x21
#define REG_T_ON_6 0x22
#define REG_I_ON_6 0x23
#define REG_OFF_6 0x24
#define REG_T_ON_7 0x25
#define REG_I_ON_7 0x26
#define REG_OFF_7 0x27
#define REG_T_RISE_7 0x28
#define REG_T_FALL_7 0x29
// Miscellaneous
#define REG_HIGH_INPUT 0x2A
// Software Reset
#define REG_RESET 0x7D

uint8_t REG_I_ON[8] = {REG_I_ON_0, REG_I_ON_1, REG_I_ON_2, REG_I_ON_3,
					   REG_I_ON_4, REG_I_ON_5, REG_I_ON_6, REG_I_ON_7};
uint8_t REG_T_ON[8] = {0xFF, 0xFF, REG_T_ON_2, REG_T_ON_3,
					   0xFF, 0xFF, REG_T_ON_6, REG_T_ON_7};
uint8_t REG_OFF[8] = {0xFF, 0xFF, REG_OFF_2, REG_OFF_3,
					  0xFF, 0xFF, REG_OFF_6, REG_OFF_7};
uint8_t REG_T_RISE[8] = {0xFF, 0xFF, 0xFF, REG_T_RISE_3, 0xFF, 0xFF, 0xFF, REG_T_RISE_7};
uint8_t REG_T_FALL[8] = {0xFF, 0xFF, 0xFF, REG_T_FALL_3, 0xFF, 0xFF, 0xFF, REG_T_FALL_7};
