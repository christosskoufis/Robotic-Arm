int debounce(int button)
{
    buttonState[button]=mcp.digitalRead(button);
    if (buttonState != oldButtonState)
    {
      if(millis()-buttonPressTime >=debounceTime)
      {
        buttonPressTime=millis();
        oldButtonState[button]=buttonState[button];
      }
    }
    
}

//If Buttonstate == low then button is pressed
// Else button is not pressed

