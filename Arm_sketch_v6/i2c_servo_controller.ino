// I2C Servo Controller
/* Servo Connections
 *  RotationServo = X
 *  BaseServos  = 0 , 1
 *  Joint1Servo = 2
 *  Joint2Servo = 3
 *  WristServo = 4
 *  Claw Servo = 5
 */
 int servocontroller (int servo,int servopos)
 { int pulselength;
 if(servo !=0 && servo !=1)
 {
  pulselength = map(servopos, 0, 180, SERVOMIN, SERVOMAX);
  servodriver.setPWM(servo,0,pulselength);
 }
 else
 {
  pulselength = map(servopos, 0, 180, SERVOMIN, SERVOMAX);
  servodriver.setPWM(0,0,pulselength);
  servodriver.setPWM(1,1,pulselength);
 }
  
 }
