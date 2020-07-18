void parseData() 
{      // split the data into its parts

        char * strtokIndx; // this is used by strtok() as an index
        Serial.println("Parsing Data");
        for(int i=0;i<=31;i++)
        {
          Serial.println("FOR LOOP");
          if(i==0)
          {
            Serial.println("i=0");
            strtokIndx = strtok(tempChars,",");      // get the first part - the string
            Values[i]== atoi(strtokIndx);
          }
          else
          {
            Serial.println(i);
            strtokIndx = strtok(NULL,",");
            Values[i]== atoi(strtokIndx);
          }
        }   
}

