void normal_mode()
{ 
  // INCOMPLETE
  /*
   * NORMAL SMOOTH MOVEMENT
   * 1)Read Encoder
   * 2)Update LCD
   * 3)Read ADC
   * 4)Read Buttons
   * 5)Move Servos
   * 6)Move Stepper
   * **1 Update The Servo Position every few ms to avoid instant movement and jitter
   * **2 When in normal mode Button 3 Will Home   
   * 
    */
    lcd_update();
  
  //MOVE MOTORS
  // If Joysticks are moved 
   read_controls();
  //Serial.println(J1Yangle); //DB
  
  if(J1Xangle>=89 || J1Xangle <=93)
  {
    //Serial.println(J1Xangle); //DB
    if(J1Xangle!= currentAngle[0])
    {
        if(currentAngle[0] <= J1Xangle)
        {
          //Serial.print("CurrentAngle Is  :");   //DB
          //Serial.print(currentAngle[0]);        //DB
          //Serial.print("   Desired Angle Is  ");//DB
          //Serial.println(J1Xangle);             //DB
          drive_servo(0,currentAngle[0]);
          drive_servo(1,currentAngle[0]);
          currentAngle[0]++;
        }
        else if(currentAngle[0] >= J1Xangle)
        {
          drive_servo(0,currentAngle[0]);
          drive_servo(1,currentAngle[0]);
          currentAngle[0]--;
        }
    }
  }
  if(J1Yangle>=89 || J1Yangle <=93)
  {
    //Serial.println(J1Yangle); //DB
    if(J1Yangle!= currentAngle[1])
    {
        if(currentAngle[1] <= J1Yangle)
        {
          //Serial.print("CurrentAngle Is  :");   //DB
          //Serial.print(currentAngle[1]);        //DB
          //Serial.print("   Desired Angle Is  ");//DB
          //Serial.println(J1Yangle);             //DB
          drive_servo(2,currentAngle[1]);
          currentAngle[1]++;
        }
        else if(currentAngle[1] >= J1Yangle)
        {
          drive_servo(2,currentAngle[1]);
          currentAngle[1]--;
        }
    }
  }
  if(J2Xangle>=89 || J2Xangle <=93)
  {
    //Serial.println(J2Xangle); //DB
    if(J2Xangle!= currentAngle[2])
    {
        if(currentAngle[2] <= J2Xangle)
        {
          //Serial.print("CurrentAngle Is  :");   //DB
          //Serial.print(currentAngle[2]);        //DB
          //Serial.print("   Desired Angle Is  ");//DB
          //Serial.println(J2Xangle);             //DB
          drive_servo(3,currentAngle[2]);
          currentAngle[2]++;
        }
        else if(currentAngle[2] >= J2Xangle)
        {
          drive_servo(3,currentAngle[2]);
          currentAngle[2]--;
        }
    }
  }
  if(J2Yangle>=89 || J2Yangle <=93)
  {
    //Serial.println(J2Yangle); //DB
    if(J2Yangle!= currentAngle[3])
    {
        if(currentAngle[3] <= J2Yangle)
        {
          //Serial.print("CurrentAngle Is  :");   //DB
          //Serial.print(currentAngle[3]);        //DB
          //Serial.print("   Desired Angle Is  ");//DB
          //Serial.println(J2Yangle);             //DB
          drive_servo(4,currentAngle[3]);
          currentAngle[3]++;
        }
        else if(currentAngle[3] >= J2Yangle)
        {
          drive_servo(4,currentAngle[3]);
          currentAngle[3]--;
        }
    }
  }
  //STEPPER AND CLAW LEFT
    
    while(J1ButtonPressed == true)
    {
      read_controls();
      if(StepperAngle-1>=0)
     {
      //Serial.print("Stepper Angle  ");  //DB
      //Serial.println(StepperAngle);       //DB
      //Serial.print("    Hold Time  "); //DB
      //Serial.println(millisPassedJB1);      //DB
      StepperAngle=StepperAngle-1;
      drive_stepper(microstepping,StepperAngle);
     }
    }
    while(J2ButtonPressed == true)
    {
      read_controls();
      if(StepperAngle+1<=360)
     {
      //Serial.print("Stepper Angle  ");  //DB
      //Serial.println(StepperAngle);       //DB
      //Serial.print("    Hold Time  "); //DB
      //Serial.println(millisPassedJB1);      //DB
      StepperAngle=StepperAngle+1;
      drive_stepper(microstepping,StepperAngle);
     }
    }
}

