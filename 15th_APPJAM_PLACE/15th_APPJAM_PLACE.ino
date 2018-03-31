#include <SoftwareSerial.h>
 
SoftwareSerial BTSerial(2, 3); //Connect HC-06. Use your (TX, RX) settings
 
void setup()  
{
  Serial.begin(9600);
  Serial.println("Hello!");
  BTSerial.begin(9600);
}
 
void loop(){
  BTSerial.write('0');
  delay(1000);
}
