void normalmode()
{

  /*
   * When in normal mode
   * 1)Get current milliseconds that the program is running
   * 2)for 50 milliseconds(while loop)
   * 3)if there is a new angle input different from the previous angle written 
   * 4)else go to 9
   * 5)slowly update the servo possition (for loop with 5us delay)
   * 6)then the position of each joint is the new angle
   * 7)and the "old angle" is the angle we just put in and we wait for the new one
   * 8)then reset the millispassed timer
   * 8)if the servo angle shall not change detach the servo to resolve jittering
   */
   
  millispassed=millis();
  while(millis()-millispassed<20)
  { 
    // Servos That Use Joysticks
  }
    if((OldY1angle != (Y1angle+5)) || (OldY1angle != (Y1angle-5))) // If J1 Yaxis changed 
    {
      servo=1;
      if(Y1angle > BaseServoPos)
      {
        for (int i=BaseServoPos; i <=Y1angle; i++)
        {
          servopos=i;
          servocontroller(servo,servopos);
          delayMicroseconds(5);
        }
      if(Y1angle < BaseServoPos)
      {
        for (int i=BaseServoPos; i>= Y1angle; i--)
        {
          servopos=i;
          servocontroller(servo,servopos);
          delayMicroseconds(5);
        }
       }
       BaseServoPos=Y1angle;
       OldY1angle=Y1angle;
     }
    }
    
      if(Y1angle > servopos)
       {
          for(int i=servopos; i<=Y1angle; i++)
        {
          BaseServo1.write(i);
          BaseServo2.write(map(i);
          delayMicroseconds(5);
        }
      }
     if(Y1angle < servopos)
      {
         for(int i=servopos; i>=Y1angle; i=i-1)
         {
           BaseServo1.write(i);
           BaseServo2.write(i);
           delayMicroseconds(5);
         }
     }
    }
    
    // Servos That Use Buttons
    if(servo=0) // if rotation motor is pressed
    {
      input_reading(); // read inputs to see if 
      if(JB0pressed == true || JB1pressed true)
      {
        input_reading();
        if(JB0pressed == true)
        {
          
        }
      }
    }
   }

