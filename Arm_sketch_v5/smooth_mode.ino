void smooth_mode()
{
  millispassed=millis();
  
  while(millis()-millispassed<20)
  {
    // Base Servo Controll
    if((OldY1angle != (Y1angle+5)) || (OldY1angle != (Y1angle-5)))
  {
    if(Y1angle > BaseServoPos)
  {
    for(int i=BaseServoPos; i<=Y1angle; i++)
    {
      servocontroller(0,i);
      servocontroller(1,i);
      delayMicroseconds(5);
    }
  }
  if(Y1angle < BaseServoPos)
  {
    for(int i=BaseServoPos; i>=Y1angle; i=i-1)
    {
      servocontroller(0,i);
      servocontroller(1,i);
      delayMicroseconds(5);
    }
  }
  BaseServoPos=Y1angle;
  OldY1angle=Y1angle;
  }
  // Joint 1 Servo Control
  if((OldX1angle != (X1angle+5)) || (OldX1angle != (X1angle-5)))
  {
    if(X1angle > Joint1ServoPos)
  {
    for(int i=Joint1ServoPos; i<=X1angle; i++)
    {
      servocontroller(2,i);
      delayMicroseconds(5);
    }
  }
  if(X1angle < Joint1ServoPos)
  {
    for(int i=Joint1ServoPos; i>=X1angle; i=i-1)
    {
      servocontroller(2,i);
      delayMicroseconds(5);
    }
  }
  Joint1ServoPos=X1angle;
  OldX1angle=X1angle;
  }
  // Joint 2 Servo Control
  if((OldY2angle != (Y2angle+5)) || (OldY2angle != (Y2angle-5)))
  {
    if(Y2angle > Joint2ServoPos)
  {
    for(int i=Joint2ServoPos; i<=Y2angle; i++)
    {
      servocontroller(3,i);
      delayMicroseconds(5);
    }
  }
  if(Y2angle < Joint2ServoPos)
  {
    for(int i=Joint2ServoPos; i>=Y2angle; i=i-1)
    {
      servocontroller(3,i);
      delayMicroseconds(5);
    }
  }
  Joint2ServoPos=Y2angle;
  OldY2angle=Y2angle;
  }
  // Wrist Servo Control
  if((OldX2angle != (X2angle+5)) || (OldX2angle != (X2angle-5)))
  {
    if(Y2angle > WristServoPos)
  {
    for(int i=WristServoPos; i<=X2angle; i++)
    {
      servocontroller(4,i);
      delayMicroseconds(5);
    }
  }
  if(Y2angle < WristServoPos)
  {
    for(int i=WristServoPos; i>=X2angle; i=i-1)
    {
      servocontroller(4,i);
      delayMicroseconds(5);
    }
  }
  WristServoPos=X2angle;
  OldX2angle=X2angle;
  }
  // BASE MOTOR
  input_reading();
  if(JB0pressed == true) //LEFT 
  {
    if(angle <360)
    {
      angle=angle+5;
      move_dir=1;
    }
    if(angle > 360)
    {
      angle=0;
      angle=angle+5;
      move_dir=1;
    }
  }
  if(JB1pressed==true) // RIGHT
  {
    if(angle <360 && angle >0)
    {
      angle=angle-5;
      move_dir=0;
    }
    if(angle <0)
    {
      angle=360;
      angle=angle-5;
      move_dir=0;
    }
  }
  stepper_rotate(move_dir,angle,StopSwitchState);
  // CLAW MOTOR
  if(EB0pressed==true)
  {
    if(ClawServoPos <= 180)
    {
      ClawServoPos=ClawServoPos+10;
      servocontroller(5,ClawServoPos);
    }
  }
  if(EB1pressed==true)
  {
    if(ClawServoPos >= 180)
    {
      ClawServoPos=ClawServoPos-10;
      servocontroller(5,ClawServoPos);
    }
  }
  }
}

