void check_mode()
{
  for(int i=5;i<=8;i++)
  {
    if(button[i] ==1)
    {
      modebutton=i;
      button[modebutton]=NULL;
    }
    else
    {
      modebutton=0;
    }
  }
  if(modebutton != currentmodeval && modebutton !=0)
  {
    if(modebutton=5)
  {
    //Instant Mode
    oldmode=mode;
    mode=1;
    currentmodeval=5;
  }
  else if(modebutton=6)
  {
    //Smooth Mode
    oldmode=mode;
    mode=2;
    currentmodeval=6;
  }
  else if(modebutton=7)
  {
    //Precision
    oldmode=mode;
    mode=3;
    currentmodeval=7;
  }
  else
  {
    //Learning
    oldmode=mode;
    mode=4;
    currentmodeval=8;  
  }
  modebutton=0;
  }
}

