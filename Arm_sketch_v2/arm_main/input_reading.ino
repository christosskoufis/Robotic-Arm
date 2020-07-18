// INPUT READING
void readinputs()
{ // Joystick values axis
  y1val=analogRead(Y1);
  x1val=analogRead(X1);
  x2val=analogRead(Y2);
  y2val=analogRead(X2);
  // Values from joystick keys
  key1val=analogRead(KEY1);
  key2val=analogRead(KEY2);
  // Values from extra keys
  key3val=analogRead(KEY3);
  key4val=analogRead(KEY4);
  key5val=analogRead(KEY5);
  key6val=analogRead(KEY6);
  key7val=analogRead(KEY7);
  key8val=analogRead(KEY8);

  // Value statements for joystick angles
  if(y1val <500 || y1val >530)
  {
    y1angle=map(y1val,0,1023,0,180);
  }
  if(x1val <500 || x1val >530)
  {
    x1angle=map(x1val,0,1023,0,180);
  }
  if(y2val <500 || y2val >530)
  {
    y2angle=map(y2val,0,1023,0,180);
  }
  if(x2val <500 || x2val >530)
  {
    x2angle=map(x2val,0,1023,0,180);
  }
  // Value statements for joystick keys
  if(key1val < 500) 
  {
    key1pressed=true;
  }
  else
  {
    key1pressed=false;
  }
  if(key2val < 500)
  {
    key2pressed=true;
  }
  else
  {
    key2pressed=false;
  }
  // Value statements for extra keys
  Serial.println(key3val);
}
