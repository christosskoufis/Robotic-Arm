/*
  Device List
  1)Arduino Mega MCU
  Module List
  --- I2C Devices ---
  1)Servo Controller
  2)ADC
  3)Display
  4)MCP23017 Io Expander
  --- SPI ---
  1) Micro SD Module
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
  * 3)Micro SD Card Module
  * CS - PIN 53
  * SCK - PIN 52
  * MOSI - PIN 51
  * MISO - PIN 50
  * 
  * OTHER CONNECTIONS
  *--- JOYSTICK AXIS ---
  *X1 - ADC A0
  *X2 - ADC A1
  *Y1 - ADC A2
  *Y2 - ADC A3
  *--- JOYSTICK KEYS ---
  *Joystick Key 1 - I/O Expander A0
  *Joystick Key 2 - I/O Expander A1
  *Rotary Encoder CLK - I/O Expander A2
  *Rotary Encoder DATA - I/O Expander A3
  *Rotary Encoder KEY - I/O Expander A4
  *Button 1 - I/O Expander A5
  *Button 2 - I/O Expander A6
  *Button 3 - I/O Expander A7
  *Button 4 - I/O Expander B0
  */

//LIBRARIES
#include <Wire.h>
#include <Arduino.h>
#include <Adafruit_ADS1015.h>
#include <Adafruit_PWMServoDriver.h>
#include "Adafruit_MCP23017.h"
#include <LiquidCrystal_I2C.h>
#include <SPI.h>
#include <SD.h>
#include "VARIABLES.h"
#include "DRV8825.h"
//MODULES
Adafruit_ADS1115 ads; // ADC
Adafruit_MCP23017 mcp; // IO Expander
Adafruit_PWMServoDriver ServoDriver= Adafruit_PWMServoDriver(); //Servo Driver
LiquidCrystal_I2C lcd(0x27, 16, 2); // LCD
DRV8825 stepper(200,6,7, 2, 3, 4, 5); // Stepper Driver



void setup()
{
    Serial.begin(9600); // DB
    stepper.begin(RPM);
    lcd.begin();
    ads.begin();
    mcp.begin();
    ServoDriver.begin();
    ServoDriver.setPWMFreq(60);
    // Starting Up SD Card
    while (!SD.begin(CS_PIN))
    {
      lcd_update(5,0); //Card Mount Error Screen
    }
}
void loop()
{  /*
    delay(1000);
    lcd.clear();
    delay(1000);
    lcd.setCursor(4,0);
    lcd.print("Welcome");
    lcd.setCursor(4,1);
    lcd.print("Arm V1.0");
    */
    boot(); 
  //choose_mode();
  // Inside Selected Mode Check to see for rotary encoder changes and update screen accordignly.
}
  

