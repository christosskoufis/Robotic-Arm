void read_rotary_encoder()
{
  currentTime = millis();
  if(currentTime >= (loopTime + 1))
  {   
    encoderA=mcp.digitalRead(2);
      if((!encoderA) && encoderAprev)
      {
        encoderB=mcp.digitalRead(3);
        if(encoderB)
        {
          cwchanged=true;
          //Serial.println("CW"); //DB
        }
        else
        {
          ccwchanged=true;
          //Serial.println("CCW"); // DB
        }        
      }
      encoderAprev=encoderA;
   }
   loopTime=currentTime;
   debounce(0);
}

