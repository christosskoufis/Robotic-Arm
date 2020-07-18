void boot()
{  
   //WORKING
   //delay improvements to be made.
   lcd.clear();
   lcd_update();
   delay(2000);
   Serial.println("reading EEPROM"); //DB
   EEPROM_read();   
   modeopt=1000;
   Serial.println("Menu =1"); //DB
   lcd.clear();
   while(modeopt==1000)
   {
     Serial.println(screen); //DB
     Serial.println(option); //DB
     Serial.println(modeopt); //DB
     bootselection=true;
     lcd_update();
   }
   currentpos=0;
   menu=0;
   if(modeopt==0)
   {
     Serial.println("Normal Mode"); //DB
     normal_mode();
   }
   if(modeopt==1)
   {
    Serial.println("Learning Mode"); //DB
    learning_mode();
   }
   if(modeopt==2)
   {
    Serial.println("Precision Mode"); //DB
    //precision_mode();
   }
}

