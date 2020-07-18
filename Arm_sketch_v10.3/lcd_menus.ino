/*
 *1) Boot Screen (screen 0 , option 0)
 *2)Main Menu  ---->  Change Mode 2.1 (screen 1 , option 0)
 *            |
 *            |---->  Repeat Move 2.2 (screen 1 , option 1)
 *            |
 *            |---->  Settings 2.3    (screen 1 , option 2)
 *2.1 Change Mode 
 *|
 *|---> Normal Operation (screen 2 , option 0)
 *| 
 *|---> Learning Mode    (screen 2 , option 1)
 *|
 *|---> Precision Operation (screen 2 , option 2)
 *
 *2.2 Repeat Move
 *|---> Cycles (screen 3 , option 0)
 *2.3 Settings
 *|
 *|---> Stepper Steps (screen 4 ,option 0)
 *|
 *|---> Microstepping (screen 4 ,option 1)
 *|
 *|---> Reset To Defaults (screen 4 ,option 2)
 *
 *
 *SD CARD ERROR (screen 5 , option 0)
 */


int lcd_update(int screen , int option)
{  
  if(screen==0 && option==0)
  {
    
    lcd.setCursor(4,0);
    lcd.print("Welcome");
    lcd.setCursor(4,1);
    lcd.print("Arm V1.0");
  }
  if(screen==1 && option!=2) // print Main Menu
  {
    
    lcd.setCursor(0,0);
    lcd.print("Change Mode");
    lcd.setCursor(0,1);
    lcd.print("Repeat Move");
    if(option==0)
    {
      lcd.setCursor(15,0);
      lcd.print((uint8_t)arrow1);
      lcd.setCursor(16,0);
      lcd.print((uint8_t)arrow2);
    }
    if(option==1)
    {
      lcd.setCursor(15,1);
      lcd.print((uint8_t)arrow1);
      lcd.setCursor(16,1);
      lcd.print((uint8_t)arrow2);
    }
  }
  if(screen==1 && option==2)
  {
    
    lcd.setCursor(0,0);
    lcd.print("Settings");
    lcd.setCursor(15,0);
    lcd.print((uint8_t)arrow1);
    lcd.setCursor(16,0);
    lcd.print((uint8_t)arrow2);
  }
  if(screen==2 && option!=2) // Change Mode Menu
  {
    
    lcd.setCursor(0,0);
    lcd.print("Normal");
    lcd.setCursor(0,1);
    lcd.print("Learning");
    if(option==0)
    {
      lcd.setCursor(15,0);
      lcd.print((uint8_t)arrow1);
      lcd.setCursor(16,0);
      lcd.print((uint8_t)arrow2);
    }
    if(option==1)
    {
      lcd.setCursor(15,1);
      lcd.print((uint8_t)arrow1);
      lcd.setCursor(16,1);
      lcd.print((uint8_t)arrow2);
    }
  }
  if(screen==2 && option ==2)
  {
    
    lcd.setCursor(0,0);
    lcd.print("Precision");
    lcd.setCursor(15,0);
    lcd.print((uint8_t)arrow1);
    lcd.setCursor(16,0);
    lcd.print((uint8_t)arrow2);
  }
  if(screen==3 && option ==0) //Repeate Move Menu
  {
    
    lcd.setCursor(0,0);
    lcd.print("Cycles");
    lcd.setCursor(15,0);
    lcd.print((uint8_t)arrow1);
    lcd.setCursor(16,0);
    lcd.print((uint8_t)arrow2);
  }
  if(screen==4 && option !=2) // Settings Menu
  {
    
    lcd.setCursor(0,0);
    lcd.print("RPM");
    lcd.setCursor(0,1);
    lcd.print("uSteps");
    if(option==0)
    {
      lcd.setCursor(15,0);
      lcd.print((uint8_t)arrow1);
      lcd.setCursor(16,0);
      lcd.print((uint8_t)arrow2);
    }
    if(option==1)
    {
      lcd.setCursor(15,1);
      lcd.print((uint8_t)arrow1);
      lcd.setCursor(16,1);
      lcd.print((uint8_t)arrow2);
    }
  }
  if(screen==4 && option==2)
  {
    
    lcd.setCursor(0,0);
    lcd.print("Reset");
    lcd.setCursor(15,0);
    lcd.print((uint8_t)arrow1);
    lcd.setCursor(16,0);
    lcd.print((uint8_t)arrow2);
  }
  if(screen==5 && option==0)   // SD Card Mount Error
  {
    lcd.setCursor(4,0);
    lcd.print("SC CARD");
    lcd.setCursor(2,1);
    lcd.print("MOUNT FAILED!");
  }
}

