void update_lcd()
{
  // LCD BOOT SEQUENCE
  bootTime=millis();
  while(boot==true)
  {
    //INSERT GRAPHICS
    delay(3000);
    lcd.clear();
    if(millis()-bootTime>=3000)
    boot=false;
  }
}
