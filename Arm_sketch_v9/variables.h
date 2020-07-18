#ifndef VARIABLES_H
#define VARIABLES_H
// Communication Variables
char dataReceive='!';
char dataSend='@';
char dataReceived='#';
char dataNotReceived='$';
static boolean recvInProgress = false;
static byte ndx = 0;
char startMarker = '<';
char endMarker = '>';
char rc;
const byte numChars = 41;
char receivedChars[numChars];
char tempChars[numChars];
int  data[16];
boolean newData = false;
boolean dataok=false;

//Button Values
int button[12];
int X1;
int X2;
int Y1;
int Y2;
boolean buttonpressed[12];
// Mode Selection Variables
int modebutton;
int mode;
int currentmodeval;
int oldmode;

// EEPROM UPDATE TIME
int timepassed;

// PWM Servo Controller setup
Adafruit_PWMServoDriver servodriver = Adafruit_PWMServoDriver();

// Servo Pulse length
#define SERVOMIN 155
#define SERVOMAX 535

//Servo Variables
int servo;
int servopos;

// Stepper Controller
int RPM = 120;
int microstepmode;
int microstep=1;
int stepperdegrees;
#define MOTOR_STEPS 200
#define DIR 8
#define STEP 9
#define MODE0 10
#define MODE1 11
#define MODE2 12
#define ENABLE 7 


/* FOR MAIN VOID LOOP
if(mode=1)
  {
    instant_mode();
  }
  else if(mode=2)
  {
    
  }
  else if(mode=3)
  {
    
  }
  else
  {
    
  }
  */
#endif
