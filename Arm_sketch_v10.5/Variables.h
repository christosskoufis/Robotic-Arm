#ifndef VARIABLES_H
#define VARIABLES_H
// Module Variables
// Stepper Motor 
int RPM = 120;  //Stgepper Round
int microstepping = 8 ; //To be changed to match default microsteps
int StepperAngle;     //Stepper Desired Angle
int CurrentAngle;     //Stepper Current Angle
// Position Variables
int POS1[6]; // POS1 variables
int POS2[6]; // POS2 variables
int POS3[6]; // POS3 variables
int POS4[6]; // POS4 variables
int HOMEPOS[6]; //Home position
// Servo Motor Driver
int SERVOMIN = 155; //Min Pulse Length
int SERVOMAX = 538; //Max Pulse Length
int servo[6];       //Servo motor count
int servoDelay;    //Servo Movement delay variable
int currentAngle[5];
unsigned long servoUpdateTime;
int pulselength;
// LCD Characters
 
   byte arrow1[] = {    // Arrow point
     B00010,
     B00100,
     B01000,
     B11111,
     B11111,
     B01000,
     B00100,
     B00010 
   }; 
   byte arrow2[] = {   // Arror back
     B00000,
     B00000,
     B00000,
     B11111,
     B11111,
     B00000,
     B00000,
     B00000
};
//Rotary Encoder

unsigned char encoderA;  
unsigned char encoderB;
unsigned long currentTime;
unsigned long loopTime;
unsigned char encoderAprev;
boolean encbuttonclicked = false;
boolean cwchanged= false;
boolean ccwchanged= false;
int currentpos;

//DEBOUNCING 
const unsigned long debounceTime=10;
unsigned long buttonPressTime;
boolean buttonPressed;
byte buttonState[9];
byte oldButtonState[9];

// ADC And Joysticks

// Sensitivity

//ads.setGain(GAIN_TWOTHIRDS);  // 2/3x gain +/- 6.144V  1 bit = 3mV      0.1875mV (default)
// ads.setGain(GAIN_ONE);        // 1x gain   +/- 4.096V  1 bit = 2mV      0.125mV
// ads.setGain(GAIN_TWO);        // 2x gain   +/- 2.048V  1 bit = 1mV      0.0625mV
// ads.setGain(GAIN_FOUR);       // 4x gain   +/- 1.024V  1 bit = 0.5mV    0.03125mV
// ads.setGain(GAIN_EIGHT);      // 8x gain   +/- 0.512V  1 bit = 0.25mV   0.015625mV
// ads.setGain(GAIN_SIXTEEN);    // 16x gain  +/- 0.256V  1 bit = 0.125mV  0.0078125mV
int16_t J1X, J1Y, J2X, J2Y;
int J1Xangle,J1Yangle,J2Xangle,J2Yangle;

// LCD Dependant Variables
boolean boot=false;
boolean boot_mode_selection=false;
int position_selected=0;
boolean normal_op_mode=false;
boolean precision_op_mode=false;
boolean learning_op_mode=false;
unsigned long bootTime;
#endif
