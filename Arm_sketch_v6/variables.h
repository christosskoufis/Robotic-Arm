#ifndef VARIABLES_H
#define VARIABLES_H

// LCD Pins
#define BACKLIGHT_PIN     3
#define En_pin  2
#define Rw_pin  1
#define Rs_pin  0
#define D4_pin  4
#define D5_pin  5
#define D6_pin  6
#define D7_pin  7
// STEPPER MOTOR
#define MOTOR_STEPS 200
#define RPM 120 // STEPPER RPM
#define MOTOR_ACCEL 2000
#define MOTOR_DECEL 1000
#define MICROSTEPS 16 // MICROSTEPING
#define DIR 8
#define STEP 9
#define ENABLE 13 // optional (just delete ENABLE from everywhere if not used)
#define MODE0 10
#define MODE1 11
#define MODE2 12
DRV8825 stepper(MOTOR_STEPS, DIR, STEP, ENABLE, M0, M1);
//Servo Positions

const byte numChars = 32;
char receivedChars[numChars];
char tempChars[numChars];
int Values[numChars];
boolean newData = false;

int RotationServoPos;
int BaseServoPos;
int Joint1ServoPos;
int Joint2ServoPos;
int WristServoPos;
int ClawServoPos;
int angle; // FOR STEPPER
// Screen Address
#define I2C_Screen 0x3F // <<----- Add your address here.  Find it from I2C Scanner

// Servo Pulse length
#define SERVOMIN 155
#define SERVOMAX 535

// PWM Servo Controller setup
Adafruit_PWMServoDriver servodriver = Adafruit_PWMServoDriver();

// Display Setup
LiquidCrystal_I2C lcd(I2C_Screen, 16, 2);
#endif

