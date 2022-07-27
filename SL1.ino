int dir1 = 6;
int dir2 = 7;
int LDR1 = A1;          //Pin at which LDR is connected
int LDR2 = A2;          //Pin at which LDR is connected
int error = 10;          //initializing variable for error

void setup() 
{ 

  
  pinMode(LDR1, INPUT);   //Making the LDR pin as input
  pinMode(LDR2, INPUT);

  delay(2000);            // giving a delay of 2 seconds
}  
 
void loop() 
{ 
  int R1 = analogRead(LDR1); // reading value from LDR 1
  int R2 = analogRead(LDR2); // reading value from LDR 2
  int diff1= abs(R1 - R2);   // Calculating the difference between the LDR's
  int diff2= abs(R2 - R1);
  
  if((diff1 <= error) || (diff2 <= error)) {
    //if the difference is under the error then do nothing
  } else {    
    if(R1 > R2)
    {
     digitalWrite(dir1, LOW);
     digitalWrite(dir2, HIGH);//Move the servo towards 0 degree
    }
    if(R1 < R2) 
    {
      digitalWrite(dir1, LOW);
     digitalWrite(dir2, HIGH); //Move the servo towards 180 degree
    }
  }
 
  delay(100);
}
