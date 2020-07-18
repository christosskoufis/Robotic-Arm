void instant_mode()
{
  Serial.println("INSTANT MODE");
  while(mode=1)
  {
    if(X1!=0 && Y1!=0 && X2!=0 && Y2!=0)
    {
      //Write To base Servos
     servocontroller(0,Y1);
     servocontroller(1,Y1);
     //Write To Joint 1 Servo
     servocontroller(2,X1);
     //Write To Joint 2 Servo
     servocontroller(3,Y2);
     //Write To Wrist Servo
     servocontroller(4,X2);
    }
    if(buttonpressed[12]==true)
    {
     if(stepperdegrees+10 <=360)
     {
      stepperdegrees=stepperdegrees+10;
     }
    }
    if(buttonpressed[11]==true)
    {
     if(stepperdegrees-10 >=0)
     {
      stepperdegrees=stepperdegrees-10;
     }
    }
    if(buttonpressed[2]==true)
    {
     if(microstepmode <=4 && microstepmode >=1)
     {
      microstepmode=microstepmode+1;
     }
    }
   if(microstepmode=1)
   {
    microstep=1;
   }
   if(microstepmode=2)
   {
    microstep=8;
   }
   if(microstepmode=3)
   {
    microstep=16;
   }
   else
   {
    microstep=32;
   }
   stepper_controller(microstep,stepperdegrees);
   get_inputs();
   check_mode();
  }
  
}

