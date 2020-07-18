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
  
  while(millis()-millispassed<50)
  {
  //1st Joint Servo
  if((oldy1angle != (y1angle+5)) || (oldy1angle != (y1angle-5)))
  {
    if(y1angle > Basepos)
  {
    for(int i=Basepos; i<=y1angle; i++)
    {
      BaseServo1.write(map(Basepos-4,0,180,5,175));
      BaseServo2.write(map(Basepos,0,180,175,5));
      delayMicroseconds(5);
    }
  }
  if(y1angle < Basepos)
  {
    for(int i=Basepos; i>=y1angle; i=i-1)
    {
      BaseServo1.write(map(Basepos-4,0,180,5,175));
      BaseServo2.write(map(Basepos,0,180,175,5));
      delayMicroseconds(5);
    }
  }
  Basepos=y1angle;
  oldy1angle=y1angle;
  }
  else
  {
    BaseServo1.detach();
    BaseServo2.detach();
  }
  
  //2ND Joint Servo
  
   if((oldx1angle != (x1angle+5) || (oldx1angle != (x1angle-5))))
  {
   if(x1angle > Joint1pos)
  {
    for(int i=Joint1pos;i<=x1angle; i++)
    {
      Joint1Servo1.write(map(Joint1pos-3,0,180,5,175));
      Joint1Servo2.write(map(Joint1pos,0,180,175,5));
      delayMicroseconds(5);
    }
  }
  if(x1angle < Joint1pos)
  {
    for(int i=Joint1pos;i>=x1angle; i=i-1)
    {
      Joint1Servo1.write(map(Joint1pos-3,0,180,5,175));
      Joint1Servo2.write(map(Joint1pos,0,180,175,5));
      delayMicroseconds(5);
    }
  }
    Joint1pos=x1angle;
    oldx1angle=x1angle;
  }
  else
  {
    Joint1Servo1.detach();
    Joint1Servo2.detach();
  }
  
  //3RD Joint Servo
  
  if((oldy2angle != (y2angle+5)) || (oldy2angle != (y2angle-5)))
  {
    if(y2angle > Joint2pos1)
  {
    for(int i = Joint2pos1 ; i <= y2angle; i++)
    {
      Joint2Servo1.write(map(Joint2pos1,0,180,5,175));
      delayMicroseconds(10);
    }
  }
  if(y2angle < Joint2pos1)
  {
    for(int i = Joint2pos1 ; i >= y2angle; i=i-1)
    {
      Joint2Servo1.write(map(Joint2pos1,0,180,5,175));
      delayMicroseconds(5);
    }
  }
  Joint2pos1=y2angle;
  oldy2angle=y2angle;  
  }
  else
  {
    Joint2Servo1.detach();
  }
  
  //Rotation Servo
  
  if((oldx2angle != (x2angle+5)) || (oldx2angle != (x2angle-5)) )
  {
    if(x2angle > Joint2pos2)
  {
    for(int i = Joint2pos2 ; i <= x2angle; i++)
    {
      Joint2Servo2.write(map(Joint2pos2,0,180,5,175));
      delayMicroseconds(5);
    }
  }
  if(x2angle < Joint2pos2)
  {
    for(int i = Joint2pos2 ; i >= x2angle; i=i-1)
    {
      Joint2Servo2.write(map(Joint2pos2,0,180,5,175));
      delayMicroseconds(5);
    }
  }
  Joint2pos2=x2angle;
  oldx2angle=x2angle;
  }
   else
  {
    Joint2Servo2.detach();
  }
}
millispassed=0;
}
