void get_inputs()
{ 
  Serial1.print(dataReceive);
  while(Serial1.available() > 0 && newData == false)
  {
    Serial.println("Getting RC"); // DB
    rc = Serial1.read();
    Serial.println(rc); // DB
    if (recvInProgress == true) 
        {
          if (rc != endMarker) 
            {
                Serial.println("RC != endMarker"); // DB
                receivedChars[ndx] = rc;
                ndx++;
                if (ndx >= numChars) 
                {
                    ndx = numChars - 1;
                }
                else 
               {
                 Serial.println("RC == endMarker"); // DB
                receivedChars[ndx] = '\0'; // terminate the string
                recvInProgress = false;
                ndx = 0;
                newData = true;
               }
            }
         else if (rc == startMarker)
          {
             Serial.println("RC == startMarker"); // DB
             recvInProgress = true;
          }
        }

        
  }
}

