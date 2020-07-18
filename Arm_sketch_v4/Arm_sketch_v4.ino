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

// LCD Pins
#define BACKLIGHT_PIN     3
#define En_pin  2
#define Rw_pin  1
#define Rs_pin  0
#define D4_pin  4
#define D5_pin  5
#define D6_pin  6
#define D7_pin  7

// Joystick Pins
int Y1 = A0;
int Y2 = A2;
int X1 = A1;
int X2 = A3;

// Joystick Buttons
int JB0 = A4;
int JB1 = A5;

// External Buttons
int EB0 = A6;
int EB1 = A7;
int EB2 = A8;
int EB3 = A9;
int EB4 = A10;
int EB5 = A11;
int EB6 = A12;
int EB7 = A13;
int EB8 = A14;
int EB9 = A14;
//Servo Positions
int RotationServoPos;
int BaseServoPos;
int Joint1ServoPos;
int Joint2ServoPos;
int WristServoPos;
int ClawServoPos;

//Servo Number And ServoPos
int servo;
int servopos;

// Screen Address
#define I2C_Screen 0x3F // <<----- Add your address here.  Find it from I2C Scanner

// Servo Pulse length
#define SERVOMIN 771
#define SERVOMAX 1798

// PWM Servo Controller setup
Adafruit_PWMServoDriver servodriver = Adafruit_PWMServoDriver();

// Display Setup
LiquidCrystal_I2C lcd(I2C_Screen, 16, 2);
 
// Servos
Servo Rotationservo;
Servo BaseServo1;
Servo BaseServo2;
Servo Joint1Servo;
Servo Joint2Servo;
Servo WritstServo;
Servo ClawServo;

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

// Servo Number And Angle
int servo;
int servopos;
// Timing
int millispassed;

void setup()
{
  // Initialize Display And And turn on backlight
  lcd.begin ();

  // Servo Controller Setup
  servodriver.begin();
  servodriver.setPWMFreq(500);
}
void loop()
{
   input_reading();
   check_operation_mode();
}

