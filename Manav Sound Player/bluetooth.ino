#include <Servo.h>
Servo myservo;
int pos=0;
int sc=3;
void setup()

{


//Setup usb serial connection to computer

Serial.begin(9600);
pinMode(sc,OUTPUT);
//Setup Bluetooth serial connection to android


}

void loop()

{


if(Serial.available() >0)
{
if(Serial.read() == 123 )

{
Serial.print("play");
myservo.attach(9);
digitalWrite(sc,HIGH);
}
}

}
