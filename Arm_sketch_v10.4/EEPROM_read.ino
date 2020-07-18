void EEPROM_read()
{
  //WORKING
   for(int i=0;i<=1;i++)
 {
  if(EEPROM.read(i) !=255)
  {
    if(i==0)
    {
      RPM=EEPROM.read(i);
  //   Serial.print("EEPROM CONTENT AT  "); // DB
  //   Serial.print(i); //DB
  //   Serial.print("(RPM)   =  "); //DB
  //   Serial.println(EEPROM.read(i)); // DB   777777
    }
    else
    {
      microstepping=EEPROM.read(i);
    //  Serial.print("EEPROM CONTENT AT  "); // DB
    // Serial.print(i); //DB
    // Serial.print("(USTEPS)   =  "); //DB
    // Serial.println(EEPROM.read(i)); // DB   
    }
  }
 }
 //Getting Home POS45
 for(int i=2;i<=7;i++)
 {
   if(EEPROM.read(i) !=255)
   {
     HOMEPOS[i-2]=EEPROM.read(i);
    // Serial.print("EEPROM CONTENT AT  "); // DB
    // Serial.print(i); //DB
    // Serial.print("  =  "); //DB
    // Serial.println(EEPROM.read(i)); // DB     
   }
 }
 //Getting Servo Delay
 if(EEPROM.read(8) != 255)
 {
  servoDelay=EEPROM.read(8);
 }
}

