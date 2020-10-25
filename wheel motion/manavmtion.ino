#include<AFMotor.h>

int lm1 = 7;
int lm2 = 8;
int rm1 = 9;
int rm2 = 10;


void setup()
{
  
   pinMode(lm1,OUTPUT);
   pinMode(lm2,OUTPUT);
   pinMode(rm1,OUTPUT);
   pinMode(rm2,OUTPUT);
   
   

  
  Serial.begin(9600);
}

void loop()
{
  
  while(Serial.available() == 0);
  char val = Serial.read() ;
  Serial.print(val);

 
  
  if (val == 'F')
  {
    Serial.println("FORWARD");
    digitalWrite(lm1,HIGH);  digitalWrite(rm1,HIGH);
    digitalWrite(lm2,LOW);       digitalWrite(rm2,LOW);
    
  }

 
    
  else if(val == 'B')
  {
  Serial.println("BACK");
      digitalWrite(lm2,HIGH);  digitalWrite(rm2,HIGH);
    digitalWrite(lm1,LOW);       digitalWrite(rm1,LOW);
  
  }
   
  else if(val == 'R')
  {
  Serial.println("RIGHT");
    digitalWrite(lm1,HIGH);  digitalWrite(rm2,HIGH);
    digitalWrite(lm2,LOW);       digitalWrite(rm1,LOW);
  }
   
  else if(val == 'L')
  {
   Serial.println("LEFT");
     digitalWrite(lm2,HIGH);  digitalWrite(rm1,HIGH);
    digitalWrite(lm1,LOW);       digitalWrite(rm2,LOW);
  
  }
   
  

  else
  {
  Serial.println("Invalid!!!");
     digitalWrite(lm1,LOW);  digitalWrite(rm1,LOW);
    digitalWrite(lm2,LOW);       digitalWrite(rm2,LOW);

  }
  
}

