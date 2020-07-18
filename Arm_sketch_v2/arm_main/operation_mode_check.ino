int operationmode(boolean key1pressed,boolean key2pressed, boolean key3pressed)
{ 
  int operation_mode;
  int millispassed;
  millispassed=millis();
  readinputs();
  if(millis-millispassed < 2000)
  {
    readinputs();
    if(key1pressed == true) // Home
  {
    operation_mode=1;
  }
  else if(key2pressed == true) // Learn
  {
    operation_mode=2;
  }
  else if(key3pressed == true) //Repeat
  {
    operation_mode=3;
  }
  else //Normal mode
  {
    operation_mode=0;
  }
  }
  
  return operation_mode;
}

