
 // READING STEPPER RPM
  if(SD.exists("RPM.txt")) // If the file Exists
  {
     RPMfile = SD.open("RPM.txt"); // Open File from SD card
     if(RPMfile) // If file opened OK
      {
        while(RPMfile.available()) // While Data is available
        {
         RPM=RPMfile.read(),DEC; // set the RPM variable
        }
      }
    RPMfile.close(); //Close File
  }
  else
  {
    RPMfile=SD.open("RPM.txt",FILE_WRITE); // Create the file that does not exist
    RPMfile.close(); 
  }

  //READING MICROSTEPPING
   if(SD.exists("USTEPS.txt")) // If the file Exists
  {
     USTEPSfile = SD.open("USTEPS.txt"); // Open File from SD card
     if(USTEPSfile) // If file opened OK
      {
        while(USTEPSfile.available()) // While Data is available
        {
         microstepping=USTEPSfile.read(),DEC; // set the Microsteps variable
        }
      }
    USTEPSfile.close(); //Close File
  }
  else
  {
    USTEPSfile=SD.open("USTEPS.txt",FILE_WRITE); // Create the file that does not exist
    USTEPSfile.close();
  }

  // READING POSITION 1
  if(SD.exists("POS1.txt"))
  {
    POS1file = SD.open("POS1.txt");
    if(POS1file)
    {
      int o=0;
      while(POS1file.available())
      {
          POS1[o]=POS1file.read(),DEC;
          o++;
      }
    }
    POS1file.close();
  }
  else
  {
     POS1file=SD.open("POS1.txt",FILE_WRITE); // Create the file that does not exist
     POS1file.close();
  }
  // ------- DEBUGGING -------
  for(int i=0;i<=5;i++)
  {
    Serial.println(POS1[i]);
  }
