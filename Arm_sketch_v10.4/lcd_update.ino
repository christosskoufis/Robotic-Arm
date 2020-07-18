/*
 *1) Boot Screen (screen 0 , option 0)
 *2)Main Menu  ---->  Change Mode 2.1 (screen 1 , option 0)   MENU =0
 *            |
 *            |---->  Repeat Move 2.2 (screen 1 , option 1)
 *            |
 *            |---->  Settings 2.3    (screen 1 , option 2)
 *            
 *2.1 Change Mode  MENU =1
 *|
 *|---> Normal Operation (screen 2 , option 0)
 *| 
 *|---> Learning Mode    (screen 2 , option 1)
 *|
 *|---> Precision Operation (screen 2 , option 2)
 *|
 *|--->  Back (screen 2 , option 3)  
 *
 *2.2 Repeat Move MENU =2
 *|---> Cycles (screen 3 , option 0)
 *|
 *|---->  Back (screen 3 , option 1) 
 *
 *2.3 Settings MENU =3
 *|
 *|---> Stepper Steps (screen 4 ,option 0)
 *|
 *|---> Microstepping (screen 4 ,option 1)
 *|
 *|---> Servo Response Delay (screen 4, option 4)    // TO BE ADDED
 *|
 *|---> Reset To Defaults (screen 4 ,option 2)
 *|
 *|---->  Back (screen 4 , option 3) 

 */

void lcd_update()
{  
  //WORKING BUT NEEDS FIXES
  currentpos=0;
  menu=0;
  read_encoder();
  if(menu==100) // if must show bootscreen
  {
    screen=0;
    option=0;
  }
  if(bootselection==true)
  { 
    Serial.println("BOOTSELECTION TRUE");
    
    screen=2;
    option=0;
    if(cwchanged==true)
    {
       if(currentpos+1<=3)
      {
        lcd.clear();
        cwchanged=false;
        currentpos++;
        if(currentpos==0)
        {
          screen=2;
          option=0;
        }
        if(currentpos==1)
        {
          screen=2;
          option=1;

        }
        if(currentpos==2)
        {
          screen=2;
          option=2;
        }
        if(currentpos==3)
        {
          screen=2;
          option=3;
        }
      }
    }
    if(ccwchanged==true)
    {
      if(currentpos-1>=0)
      {
        lcd.clear();
        ccwchanged=false;
        currentpos--; 
        if(currentpos==0)
         {
           screen=2;
           option=0;
         }
         if(currentpos==1)
         {
           screen=2;
           option=1;
          }
        if(currentpos==2)
         {
           screen=2;
           option=2;
         }
         if(currentpos==3)
         {
           screen=2;
           option=3;
         }
      }
    }
    if(encbuttonclicked==true)
    {
      encbuttonclicked=false;
      if(currentpos==0)
      {
        modeopt=0; //Normal Operation Mode
        bootselection==false;
      }
      if(currentpos==1)
      {
        modeopt=1;//Learning Operation Mode
        bootselection==false;
      }
      if(currentpos==2)
      {
        modeopt=2;
        bootselection==false;
        //Precision Operation Mode
      }
    }
  }
  if(cwchanged==true)
  {
    if(menu==0)
    {
      if(currentpos+1<=2)
      {
        lcd.clear();
        cwchanged=false;
        currentpos++;
      }
      if(currentpos==0)
      {
        screen=1;
        option=0;
        Serial.println("Option 1"); //DB
      }
      if(currentpos==1)
      {
        screen=1;
        option=1;
        Serial.println("Option 2"); //DB
      }
      if(currentpos==2)
      {
        screen=1;
        option=2;
        Serial.println("Option 3"); //DB
      }
    }
    if(menu==1)
    {
      if(currentpos+1<=3)
      {
        lcd.clear();
        cwchanged=false;
        currentpos++;
        if(currentpos==0)
        {
          screen=2;
          option=0;
          modeopt=0;
        }
        if(currentpos==1)
        {
          screen=2;
          option=1;
          modeopt=1;
        }
        if(currentpos==2)
        {
          screen=2;
          option=2;
          modeopt=2;
        }
        if(currentpos==3)
        {
          screen=2;
          option=3;
        }
      }
    }
    if(menu==2)
    {
      if(currentpos+1<=1)
      {
        lcd.clear();
        cwchanged=false;
        currentpos++;
        if(currentpos==0)
        {
          screen=3;
          option=0;
        }
        if(currentpos==1)
        {
          screen=3;
          option=1;
        }
      }
    }
    if(menu==3)
    {
      if(currentpos+1<=4)
      {
        lcd.clear();
        cwchanged=false;
        currentpos++;
        if(currentpos==0)
        {
          screen=4;
          option=0;
        }
        if(currentpos==1)
        {
          screen=4;
          option=1;
        }
        if(currentpos==2)
        {
          screen=4;
          option=2;
        }
        if(currentpos==3)
        {
          screen=4;
          option=3;
        }
        if(currentpos==4)
        {
          screen=4;
          option=4;
        }
      }
    }
  }
  if(ccwchanged==true)
  {
    if(currentpos-1>=0)
    {
      lcd.clear();
      ccwchanged=false;
      currentpos--;    
        if(menu==0)
        {
          if(currentpos==0)
        {
          screen=1;
          option=0;
        }
        if(currentpos==1)
        {
          screen=1;
          option=1;
        }
        if(currentpos==2)
        {
          screen=1;
          option=2;
        } 
      }
      if(menu==1)
      {
         if(currentpos==0)
         {
           screen=2;
           option=0;
         }
         if(currentpos==1)
         {
           screen=2;
           option=1;
          }
        if(currentpos==2)
         {
           screen=2;
           option=2;
         }
         if(currentpos==3)
         {
           screen=2;
           option=3;
         }
      }
      if(menu==2)
      {
        if(currentpos==0)
        {
          screen=3;
          option=0;
        }
        if(currentpos==1)
        {
          screen=3;
          option=1;
        }
      }
      if(menu==3)
      {
        if(currentpos==0)
        {
          screen=4;
          option=0;
        }
        if(currentpos==1)
        {
          screen=4;
          option=1;
        }
        if(currentpos==2)
        {
          screen=4;
          option=2;
        }
        if(currentpos==3)
        {
          screen=4;
          option=3;
        }
        if(currentpos==4)
        {
          screen=4;
          option=4;
        }
      }
    }
  }
  if(encbuttonclicked==true)
  {
    encbuttonclicked=false;
    if(menu==0)
    {
      if(currentpos==0)
      {
        menu=1;
      }
      if(currentpos==1)
      {
        menu=2;
      }
      if(currentpos==2)
      {
        menu=3;
      }
      currentpos=0;
    }
    if(menu==1)
    {
      if(currentpos==0)
      {
        //Normal Operation Mode
      }
      if(currentpos==1)
      {
        //Learning Operation Mode
      }
      if(currentpos==2)
      {
        //Precision Operation Mode
      }
      if(currentpos==3)
      {
        menu=0;
      }
      currentpos=0;
    }
    if(menu==2)
    {
      if(currentpos==0)
      {
        //Repeate Move Cycles 
      }
      if(currentpos==1)
      {
        menu=0;
      }
      currentpos=0;
    }
    if(menu==3)
    {
      if(currentpos==0)
      {
        //Stepper Steps
      }
      if(currentpos==1)
      {
        //microstepping
      }
      if(currentpos==2)
      {
        //servo delay
      }
      if(currentpos==3)
      {
        //reset to defaults
      }
      if(currentpos==4)
      {
        menu=0;
      }
      currentpos=0;
    }
  }
  if(screen==0 && option==0)  //BOOT SCREEN MESSAGE
  {    
    lcd.setCursor(4,0);
    lcd.print("Welcome");
    lcd.setCursor(4,1);
    lcd.print("Arm V1.0");
  }
  if(screen==1 && option!=2) // MAIN MENU 0-1 options
  {
    
    lcd.setCursor(0,0);            //PRINT ITEMS
    lcd.print("Change Mode");
    lcd.setCursor(0,1);
    lcd.print("Repeat Move");
    if(option==0)                //SETTING ARROW
    {
      lcd.setCursor(14,0);
      lcd.write(byte(0));
      lcd.setCursor(15,0);
      lcd.write(byte(1));
    }
    if(option==1)
    {
      lcd.setCursor(14,1);
      lcd.write(byte(0));
      lcd.setCursor(15,1);
      lcd.write(byte(1));
    }
  }
  if(screen==1 && option==2) //MAIN MENU OPTION 2
  {
    
    lcd.setCursor(0,0);
    lcd.print("Settings");
    lcd.setCursor(14,0);
    lcd.write(byte(0));
    lcd.setCursor(15,0);
    lcd.write(byte(1));
  }
  if(screen==2 && option!=2) // Change Mode Menu
  {
    
    lcd.setCursor(0,0);      //PRINTING OPTIONS 0-1
    lcd.print("Normal");
    lcd.setCursor(0,1);
    lcd.print("Learning");
    if(option==0)
    {
      lcd.setCursor(14,0);
      lcd.write(byte(0));
      lcd.setCursor(15,0);
      lcd.write(byte(1));
    }
    if(option==1)
    {
      lcd.setCursor(14,1);
      lcd.write(byte(0));
      lcd.setCursor(15,1);
      lcd.write(byte(1));
    }
  }
  if(screen==2 && (option ==2 || option==3))
  {
    if(option==2)
    {
      lcd.setCursor(0,0);
      lcd.print("Precision");
      lcd.setCursor(14,0);
      lcd.write(byte(0));
      lcd.setCursor(15,0);
      lcd.write(byte(1));
    }
    if(option==3)
    {
      lcd.setCursor(0,1);
      lcd.print("Back");
      lcd.setCursor(14,1);
      lcd.write(byte(0));
      lcd.setCursor(15,1);
      lcd.write(byte(1));
    }
    
  }
  if(screen==3 && option !=2) //Repeate Move Menu
  {
    
    lcd.setCursor(0,0);
    lcd.print("Cycles");
    lcd.setCursor(0,1);
    lcd.print("Back");
    if(option==0)
    {
     lcd.setCursor(14,0);
     lcd.write(byte(0));
     lcd.setCursor(15,0);
     lcd.write(byte(1));
    }
    if(option==1)
    {
     lcd.setCursor(14,1);
     lcd.write(byte(0));
     lcd.setCursor(15,1);
     lcd.write(byte(1));
    }
  }
  if(screen==4 && option !=2) // Settings Menu
  {
    
    lcd.setCursor(0,0);
    lcd.print("RPM");
    lcd.setCursor(0,1);
    lcd.print("uSteps");
    if(option==0)
    {
      lcd.setCursor(14,0);
      lcd.write(byte(0));
      lcd.setCursor(15,0);
      lcd.write(byte(1));
    }
    if(option==1)
    {
      lcd.setCursor(14,1);
      lcd.write(byte(0));
      lcd.setCursor(15,1);
      lcd.write(byte(1));
    }
  }
  if(screen==4 && option==2 || option==3)
  {
    
    lcd.setCursor(0,0);
    lcd.print("Reset");
    lcd.setCursor(0,1);
    lcd.print("Servo Delay");
    if(option==2)
    {
      lcd.setCursor(14,0);
      lcd.print((uint8_t)arrow1);
      lcd.setCursor(15,0);
      lcd.write(byte(1));
    }
    if(option==3)
    {
      lcd.setCursor(14,1);
      lcd.print((uint8_t)arrow1);
      lcd.setCursor(15,1);
      lcd.write(byte(1));
    }
  }
  if(screen==4 && option==4)
  {
    lcd.setCursor(0,0);
    lcd.print("Back");
    lcd.setCursor(14,0);
    lcd.print((uint8_t)arrow1);
    lcd.setCursor(15,0);
    lcd.write(byte(1));
  }
}

