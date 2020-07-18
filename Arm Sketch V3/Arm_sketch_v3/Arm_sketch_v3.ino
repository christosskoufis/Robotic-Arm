// Lirbary Inclusion
#include <Servo.h>
#include <LiquidCrystal.h>
// Setting Up Servos
Servo BaseServo1;
Servo BaseServo2;
Servo Joint1Servo1;
Servo Joint1Servo2;
Servo Joint2Servo1;
Servo Joint2Servo2;
Servo Rotationservo;

//LCD
const int rs = 12, en = 11, d4 = 50, d5 = 51, d6 = 52, d7 = 53;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

//Joystick axis
int Y1=A0;
int X1=A1;
int X2=A2;
int Y2=A3;

//Axis Values
int y1val;
int x1val;
int x2val;
int y2val;

//Angles
int y1angle;
int x1angle;
int y2angle;
int x2angle;

//Old Angles
int oldy1angle;
int oldx1angle;
int oldy2angle;
int oldx2angle;

//Angles Read
int y1angleread;
int x1angleread;
int y2angleread;
int x2angleread;

// Joystick Buttons
int KEY1=A4;
int KEY2=A5;

// Extra Buttons
int KEY3=A6;
int KEY4=A7;
int KEY5=A8;
int KEY6=A9;
int KEY7=A10;
int KEY8=A11;

//Joystick Button Values
int key1val;
int key2val;
// Extra Button Values
int key3val;
int key4val;
int key5val;
int key6val;
int key7val;
int key8val;

// Starting motor positions
int Basepos=90;
int Joint1pos=90;
int Joint2pos1=90;
int Joint2pos2=90;

// Joystick Button logic
boolean key1pressed;
boolean key2pressed;

// Extra Button Logic
boolean key3pressed;
boolean key4pressed;
boolean key5pressed;
boolean key6pressed;
boolean key7pressed;
boolean key8pressed;

// Timing
int millispassed;

// Mode Selection
int operation_mode;
// Setup Loop
void setup() 
{
  pinMode(Y1,INPUT);
  pinMode(X1,INPUT);
  pinMode(Y2,INPUT);
  pinMode(X2,INPUT);
  pinMode(KEY1,INPUT);
  pinMode(KEY2,INPUT);
  pinMode(KEY3,INPUT);
  pinMode(KEY4,INPUT);
  pinMode(KEY5,INPUT);
  pinMode(KEY6,INPUT);
  pinMode(KEY7,INPUT);
  pinMode(KEY8,INPUT);
  lcd.begin(16, 2);
  Serial.begin(9600);
  BaseServo1.attach(2);
  BaseServo2.attach(3);
  Joint1Servo1.attach(4);
  Joint1Servo2.attach(5);
  Joint2Servo1.attach(6);
  Joint2Servo2.attach(7);
}

// Main Loop
void loop()
{
  lcd.setCursor(0,0);
  lcd.println("HERE");
  operation_mode=operationmode(key1pressed,key2pressed,key3pressed);
  lcd.clear();
}

