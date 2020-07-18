void check_inputs()
{
  // For Axis Values if they are not above 0 then data is currupt
  for(int i=12;i<=15;i++)
  {
    if(data[i]>0)
    {
      dataok=true;
    }
    else
    {
      dataok=false;
    }
  }
  // if the data is ok assign values to variables
  if(dataok=true)
  {
    for(int i=0;i<=11;i++)
    {
      button[i]=data[i];
      if(button[i]==1)
      {
        buttonpressed[i]==true;
      }
      else
      {
        buttonpressed[i]==false;
      }
    }
    Serial1.print(dataReceived);
    X1=data[12];
    X2=data[13];
    Y1=data[14];
    Y2=data[15];
  }
  // else tell nano that data was not received and must be sent again
  else
  {
    Serial1.print(dataNotReceived);
    dataok=false;
  }
  //DB
  for(int i=0;i<=15;i++)
  {
    //Serial.println(data[i]);
  }
}

