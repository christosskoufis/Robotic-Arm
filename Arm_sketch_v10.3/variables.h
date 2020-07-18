#ifndef VARIABLES_H
#define VARIABLES_H
// VARIABLES FROM VARIABLES_H


// Module Variables
// Stepper Motor
int RPM = 120;
int microstepping= 16 ; //To be changed to match default microsteps
int POS1[6]; // POS1 variables
int POS2[6]; // POS2 variables
int POS3[6]; // POS3 variables
int POS4[6]; // POS4 variables
int HOMEPOS[6];
// Servo Motor Driver
int SERVOMIN = 150; // To be changed to match servos
int  SERVOMAX = 600; // To be changed to match servos
 // LCD Characters
   uint8_t arrow1[] = {
     B00000,
     B00100,
     B01000,
     B11111,
     B01000,
     B00100,
     B00000,
     B00000
   }; 
   uint8_t arrow2[] = {
     B00000,
     B00000,
     B00000,
     B11111,
     B00000,
     B00000,
     B00000,
     B00000
};

// SD Card
int CS_PIN = 4; //53 on MEGA
// SD Card Files
File RPMfile;
File USTEPSfile;
File POS1file;
File POS2file;
File POS3file;
File POS4file;


// END OF VARIABLES
#endif
