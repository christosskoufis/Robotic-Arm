/* Pins Taken On Mega
 * 
 * Servo PWM Controller
 * 
 * 
 */
#include <Servo.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Adafruit_PWMServoDriver.h>
#include <Arduino.h>
#include "DRV8825.h"
#include "VARIABLES.h"

void setup() 
{
  // Initialize Display And And turn on backlight
     lcd.begin ();
  // Servo Controller Setup
     servodriver.begin();
     servodriver.setPWMFreq(60);
  // STEPPER MOTOR
    stepper.begin(RPM, MICROSTEPS);
    stepper.enable();
    stepper.setSpeedProfile(stepper.LINEAR_SPEED, MOTOR_ACCEL, MOTOR_DECEL);
}

void loop() 
{
  input_reading();
}
