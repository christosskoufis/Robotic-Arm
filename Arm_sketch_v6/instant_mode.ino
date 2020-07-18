void instant_mode()
{
  get_values();
  mode_check();
  //Write To base Servos
  servocontroller(0,Y1angle);
  servocontroller(1,Y1angle);
  //Write To Joint 1 Servo
  servocontroller(2,X1angle);
  //Write To Joint 2 Servo
  servocontroller(3,Y2angle);
  //Write To Wrist Servo
  servocontroller(4,X2angle);
  // BASE MOTOR
  get_values();
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

