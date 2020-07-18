/*
  Device List
  1)Arduino Mega MCU
  Module List
  --- I2C Devices ---
  1)Servo Controller
  2)ADC
  3)Display
  4)MCP23017 Io Expander
 --- Other ---
  1)Stepper Driver
  
Connection Pins
  * ON ARDUINO
  * 1)I2C Bus 
  * SDA - 10K - Vcc
  * SCL - 10K - Vcc
  * SDA - PIN 20
  * SCL - PIN 21
  * 2)Stepper Driver
  * ENABLE - PIN 2
  * M0 - PIN 3
  * M1 - PIN 4
  * M2 - PIN 5
  * RST - Vcc
  * SLEEP - Vcc
  * STEP - PIN 6
  * DIR - PIN 7
  * 
  * OTHER CONNECTIONS
  *--- JOYSTICK AXIS ---
  *X1 - ADC A0
  *X2 - ADC A1
  *Y1 - ADC A2
  *Y2 - ADC A3
  *--- JOYSTICK KEYS ---
  *Rotary Encoder KEY - I/O Expander A0
  *Joystick Key 1 - I/O Expander A1
  *Joystick Key 2 - I/O Expander A2
  *Button 1 - I/O Expander A3  //Claw
  *Button 2 - I/O Expander A4  //Claw
  *Button 3 - I/O Expander A5
  *Button 4 - I/O Expander A6
  *Button 5 - I/O Expander A7
  *Button 6 - I/O Expander B0
  *Rotary Encoder CLK - I/O Expander B1
  *Rotary Encoder DATA - I/O Expander B2
  */

//LIBRARIES
#include <EEPROM.h>
#include <Wire.h>
#include <Arduino.h>
#include <Adafruit_PWMServoDriver.h>
#include "Adafruit_MCP23017.h"
#include <LiquidCrystal_I2C.h>
#include "VARIABLES.h"
#include <Adafruit_ADS1015.h>
#include "DRV8825.h"
//MODULES
Adafruit_MCP23017 mcp; // IO Expander
Adafruit_PWMServoDriver ServoDriver= Adafruit_PWMServoDriver(); //Servo Driver
Adafruit_ADS1115 ads; //ADC
LiquidCrystal_I2C lcd(0x27, 16, 2); // LCD
DRV8825 stepper(RPM,7,6,2,3,4,5); //Stepper Driver
void setup()
{
  
}
void loop()
{
  
}

