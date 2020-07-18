void get_inputs()
{
  //Tell Nano To Send The Data
  Serial1.print('!');
  //While Sending Record The Data
  while (Serial1.available() > 0 && newData == false) 
  {
        rc = Serial1.read();
        if (recvInProgress == true) {
            if (rc != endMarker) 
            {
                receivedChars[ndx] = rc;
                ndx++;
                if (ndx >= numChars) 
                {
                    ndx = numChars - 1;
                }
            }
            else 
            {
                receivedChars[ndx] = '\0'; // terminate the string
                recvInProgress = false;
                ndx = 0;
                newData = true;
            }
        }

        else if (rc == startMarker) 
        {
            recvInProgress = true;
        }
    }
  //If New data arrived parse it
  if (newData == true) 
  {
        
        strcpy(tempChars, receivedChars);
        char * strtokIndx;
        for(int i=0;i<=15;i++)
        {
          if(i==0)
          {
            strtokIndx = strtok(tempChars,",");
            data[i]= atoi(strtokIndx);
          }
          else
          {
            strtokIndx = strtok(NULL,",");
            data[i]= atoi(strtokIndx);
          }
        }
        newData = false;
   }
 // Check Data Integrity and if data is valid put them into integers
   check_inputs();
   dataok=false;
  
}

