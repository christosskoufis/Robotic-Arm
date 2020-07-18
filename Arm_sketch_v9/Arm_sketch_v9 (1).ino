#include <Adafruit_PWMServoDriver.h>
#include <Wire.h>
#include <Arduino.h>
#include "VARIABLES.h"
#include "DRV8825.h"
/*
 * Buttons : 
 * 1 : 
 * 2 : Change Stepper Microstepping 1/8/16/32
 * 3 : Change Stepper RPM
 * 4 : Repeat Learned Move
 * 5 : Instant Mode
 * 6 : Smooth Mode
 * 7 : Precision Mode
 * 8 : Learning Mode
 * 9 : Claw Close
 * 10 : Claw Open
 * 11 : Stepper Rotation Antilockwise (Joystick 1)
 * 12 : Stepper Rotation Clockwise (Joystick 2)
 * Joystick Axis :
 * J1 X : data[12]
 * J2 X : data[14]
 * J1 Y : data[13]
 * J2 Y : data[15]
 */
 DRV8825 stepper(MOTOR_STEPS, DIR, STEP, ENABLE, MODE0, MODE1, MODE2);
void setup()
{
  Serial.begin(9600);
  Serial1.begin(9600);
  // Servo Controller Setup
  servodriver.begin();
  servodriver.setPWMFreq(60);
  stepper.begin(RPM);
  stepper.enable();
}
void loop()
{
  get_inputs();
  check_mode();
  instant_mode();
  
}

