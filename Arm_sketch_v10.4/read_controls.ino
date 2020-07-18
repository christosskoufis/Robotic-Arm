void read_controls()
{
  //WORKING
  //Reading ADC
  J1X = ads.readADC_SingleEnded(0);
  J1Y = ads.readADC_SingleEnded(1);
  J2X = ads.readADC_SingleEnded(2);
  J2Y = ads.readADC_SingleEnded(3);
  //Serial.print(J1X);                //DB
  //Serial.print("              ");   //DB
  //Serial.println(J1Y);              //DB
  // 24430 MAX VALUE
  // 30 MIN VALUE
  // Map Values to angles 
  J1Xangle=map(J1X,30,23500,0,180);
  J1Yangle=map(J1Y,30,23500,0,180);
  J2Xangle=map(J2X,30,23500,0,180);
  J2Yangle=map(J2Y,30,23500,0,180);
  //Serial.print(J1Xangle);            //DB
  //Serial.print("              ");    //DB
  //Serial.println(J1Yangle);          //DB

  //Read State of Buttons

  
  // Joystick Button 1 Timer
  if(mcp.digitalRead(0)==LOW)
  {
    //Serial.println("BUTTON 1 PRESSED"); //DB
    J1ButtonPressed=true;
  }
  else
  {
    J1ButtonPressed=false;
  }

  
  // Joystick Button 1 Timer
  if(mcp.digitalRead(1)==LOW)
  {
    //Serial.println("BUTTON 2 PRESSED"); //DB
    J2ButtonPressed=true;
  }
  else
  {
    J2ButtonPressed=false;
  }


  // Button 1 Timer
  if(mcp.digitalRead(5)==LOW)
  {
    //Serial.println("BUTTON 3 PRESSED"); //DB
    Button1Pressed=true;
  }
  else
  {
    Button1Pressed=false;
  }


  // Button 2 Timer
  if(mcp.digitalRead(6)==LOW)
  {
    //Serial.println("BUTTON 4 PRESSED"); //DB
    Button2Pressed=true;
  }
  else
  {
    Button2Pressed=false;
  }

  //Button 3 With Debouncing
  debounce(7);
  
  if(buttonPressed==true)
  {
    buttonPressed=false;
    Button3Pressed=true;
  }
  else
  {
    Button3Pressed=false;
    buttonPressed=false;
  }

  //Button 3 With Debouncing
  debounce(8);
  
  if(buttonPressed==true)
  {
    buttonPressed=false;
    Button4Pressed=true;
  }
  else
  {
    Button4Pressed=false;
    buttonPressed=false;
  }
}

