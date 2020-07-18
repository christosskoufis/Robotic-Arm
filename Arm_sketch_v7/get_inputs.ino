void get_inputs()
{
  //Tell Nano To send The Values
  Serial.print('!');
 
  while(Serial.available() > 0 && newData == false && data_ok==false)
  {
    rc = Serial.read();
      
        if (recvInProgress == true) 
        {
            Serial.println("Started Reading");
            if (rc != endMarker) 
            {
                receivedChars[ndx] = rc;
                ndx++;
                if (ndx >= numChars) 
                {
                    ndx = numChars - 1;
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
      rc=NULL;
      if (newData == true)
      {
        strcpy(tempChars, receivedChars);
        char * strtokIndx;
        for(int i=0;i<=31;i++)
        {
          if(i==0)
          {
            strtokIndx = strtok(tempChars,",");      // get the first part - the string
            Values[i]== atoi(strtokIndx);
          }
          else
          {
            strtokIndx = strtok(NULL,",");
            Values[i]== atoi(strtokIndx);
          }
        }
        newData = false;
      }
      for(int i=0;i<=31;i++)
      {
        if(Values[i]>0)
        {
          data_above_zero++;
        }
      }
      if(data_above_zero > 4)
      {
        data_above_zero=0;
        data_ok=true;
        Serial.print('#');
      }
      else
      {
        data_ok=false;
        data_above_zero=0;
        Serial.print('$');
      }
    }
    data_ok=false;
    for(int i=0;i<=11;i++)
    {
      B[i]=Values[i];
    }
    X1=Values[12];
    Y1=Values[13];
    X2=Values[14];
    Y2=Values[15];


    // DEBUGGING 
    for(int i=0;i<=11;i++)
    {
      Serial.println(B[i]);
    }
    Serial.println(X1);
    Serial.println(Y1);
    Serial.println(X2);
    Serial.println(Y2);
    
    }
    
    

