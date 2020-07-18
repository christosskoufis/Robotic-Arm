void parsing()
{
  Serial.println("Parsing Data"); // DB
        if (newData == true)
        {
        strcpy(tempChars, receivedChars);
        char * strtokIndx;
        for(int i=0;i<=31;i++)
        {
          
          Serial.println(data[i]); //DB
          if(i==0)
          {
            strtokIndx = strtok(tempChars,",");      // get the first part - the string
            data[i]== atoi(strtokIndx);
          }
          else
          {
            strtokIndx = strtok(NULL,",");
            data[i]== atoi(strtokIndx);
          }
        }
        newData = false;
        }
}
        
