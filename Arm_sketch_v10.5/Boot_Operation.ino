void boot()
{
  boot=true;
  update_lcd();
  EEPROM_read();
  boot_mode_selection=true;
  update_lcd();  
}

