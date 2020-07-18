void EEPROM_read()
{
   RPM=EEPROM.read(0);
   micrsteps=EEPROM.read(1);
   ServoDelay=EEPROM.read(2);
   //HOME POS is set
   //The position reading needs 2 bytes in the EEPROM
   // POS[1] is byte 0 && 1 etc
}

