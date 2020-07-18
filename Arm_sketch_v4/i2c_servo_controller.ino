 int servocontroller (int servo,int servopos)
 { int pulselength;
  pulselength = map(servopos, 0, 180, SERVOMIN, SERVOMAX);
  servodriver.setPWM(servo,0,pulselength);
 }
 
