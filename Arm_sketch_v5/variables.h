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
// Joystick Pins
int Y1 = A0;
int Y2 = A2;
int X1 = A1;
int X2 = A3;

// Joystick Buttons
int JB0 = A4; // For Base Servo Rotation
int JB1 = A5; // For Base Servo Rotation

// External Buttons
int EB0 = A6; // For Claw Servo Rotation
int EB1 = A7; // For Claw Servo Rotation
int EB2 = A8; // For Mode Change
int EB3 = A9;
int EB4 = A10;
int EB5 = A11;
int EB6 = A12;
int EB7 = A13;
int EB8 = A14;
int EB9 = A15;
int STOPSWITCH = A16;
//Servo Positions
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
#define SERVOMIN 684
#define SERVOMAX 2300

// PWM Servo Controller setup
Adafruit_PWMServoDriver servodriver = Adafruit_PWMServoDriver();

// Display Setup
LiquidCrystal_I2C lcd(I2C_Screen, 16, 2);

// Joystick Angles
int Y1angle;
int Y2angle;
int X1angle;
int X2angle;

// Old Angles
int OldY1angle;
int OldY2angle;
int OldX1angle;
int OldX2angle;

// Button Logic
bool JB0pressed = false;
bool JB1pressed = false;
bool EB0pressed = false;
bool EB1pressed = false;
bool EB2pressed = false;
bool EB3pressed = false;
bool EB4pressed = false;
bool EB5pressed = false;
bool EB6pressed = false;
bool EB7pressed = false;
bool EB8pressed = false;
bool EB9pressed = false;
bool STOPpressed  = false;
bool StopSwitchState = false;
//Stepper Motor
int move_dir;
int angle;
int StopCounter=0;
// Timing
int millispassed;
//Mode Track
int mode;
// Button Pressed Counter
int EB2Times;
int EB3Times;
int EB4Times;
int EB5Times;
int EB6Times;
int EB7Times;
int EB8Times;
#endif
