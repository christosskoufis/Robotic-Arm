int drive_servo(int servo , int angle)
{
  //WORKING
  pulselength=0;
  pulselength = map(angle, 0, 180, SERVOMIN, SERVOMAX);  //Set the pulselegth using the input angle and the MAX MIN values for the servo
  ServoDriver.setPWM(servo,0,pulselength);
  //Serial.println(servo); //DB
  //Serial.println(pulselength); //DB
  //Serial.println(angle); //DB
}

