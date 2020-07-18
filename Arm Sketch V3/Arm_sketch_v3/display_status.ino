void display_status()
{
    #include <LiquidCrystal.h>
    LiquidCrystal lcd(12, 11, 5, 4, 3, 2);// pins to be changed
    lcd.setCursor(0,0);
    lcd.print("Mode : ");
    lcd.setCursor(6,0);
    lcd.print(operationmode);
    //operstionmode is int'ed in the main loop and the operstionmode function does not int it inside but gets its from the loop
    lcd.setCursor(0,1);
    //print rotation servo degrees , joint1,joint2,joint3,claw rotation
    //print  claw state
    // servo degrees will be printed like lcd.print(baseservo position);
}
