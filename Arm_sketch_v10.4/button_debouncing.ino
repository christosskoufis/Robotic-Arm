int debounce(int buttonPin)
{
  //NOT WORKING
  buttonState=mcp.digitalRead(buttonPin);
  if (buttonState != oldButtonState){
    if (millis () - buttonPressTime >= debounceTime){ // debounce
      buttonPressTime = millis ();  // when we closed the switch 
      oldButtonState =  buttonState;  // remember for next time 
      if (buttonState == LOW)
      {
        //Serial.println ("Button closed"); //DB : print that button has been closed
        buttonPressed = true;
        oldButtonState=HIGH;
      }
      else 
      {
        //Serial.println ("Button opened"); //DB: print that button has been opened
        buttonPressed = false;
        oldButtonState=HIGH;
      }  
     }
    }
}

