void input_reading()
{  
   // Joystick Angles
   if(analogRead(Y1) < 500 ||analogRead(Y1) > 530)
   {
      Y1angle=map(analogRead(Y1),0,1023,0,180);
   }
   if(analogRead(Y2) < 500 ||analogRead(Y2) > 530)
   {
     Y2angle=map(analogRead(Y2),0,1023,0,180);
   }
   if(analogRead(X1) < 500 ||analogRead(X1) > 530)
   {
     X1angle=map(analogRead(X1),0,1023,0,180);
   }
   if(analogRead(X2) < 500 ||analogRead(X2) > 530)
   {
     X2angle=map(analogRead(X2),0,1023,0,180);
   }
   // Button Logic
   if(analogRead(JB0) < 500) 
  {
    JB0pressed=true;
  }
  else
  {
    JB0pressed=false;
  }
  if(analogRead(JB1) < 500) 
  {
    JB1pressed=true;
  }
  else
  {
    JB1pressed=false;
  }
  if(analogRead(EB0) < 500) 
  {
    EB0pressed=true;
  }
  else
  {
    EB0pressed=false;
  }
  if(analogRead(EB1) < 500) 
  {
    EB1pressed=true;
  }
  else
  {
    EB1pressed=false;
  }
  if(analogRead(EB2) < 500) 
  {
    EB2Times=EB2Times+1;
    EB2pressed=true;
  }
  else
  {
    EB2pressed=false;
  }
  if(analogRead(EB3) < 500) 
  {
    EB3Times=EB3Times+1;
    EB3pressed=true;
  }
  else
  {
    EB3pressed=false;
  }
  if(analogRead(EB4) < 500) 
  {
    EB4pressed=true;
  }
  else
  {
    EB4pressed=false;
  }
  if(analogRead(EB5) < 500) 
  {
    EB5pressed=true;
  }
  else
  {
    EB5pressed=false;
  }
  if(analogRead(EB6) < 500) 
  {
    EB6pressed=true;
  }
  else
  {
    EB6pressed=false;
  }
  if(analogRead(EB7) < 500) 
  {
    EB7pressed=true;
  }
  else
  {
    EB7pressed=false;
  }
  if(analogRead(EB8) < 500) 
  {
    EB8pressed=true;
  }
  else
  {
    EB8pressed=false;
  }
  if(analogRead(STOPSWITCH) < 500)
  {
    STOPpressed=true;
    StopCounter=StopCounter+1;
  }
  else
  {
    STOPpressed=false;
  }
  if(StopCounter=2)
  {
    StopSwitchState=true;
    StopCounter=0;
  }
  
}

