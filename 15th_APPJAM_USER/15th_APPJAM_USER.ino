#include <SoftwareSerial.h> //시리얼통신 라이브러리 호출
 
int IoTTx=2;   //Tx (보내는핀 설정)at
int IoTRx=3;   //Rx (받는핀 설정)
//int AndTx=4;
//int AndRx=5;

SoftwareSerial IoTSerial(IoTTx, IoTRx);//시리얼 통신을 위한 객체선언
//SoftwareSerial AndSerial(AndTx, AndRx);

void setup() 
{
  pinMode(8, OUTPUT);
  Serial.begin(9600);   //시리얼모니터
  IoTSerial.begin(9600);//블루투스 시리얼
  //AndSerial.begin(9600);
}
void loop()
{
  if(IoTSerial.available()){
    if(IoTSerial.read() == '0'){
      Serial.write('1');
      digitalWrite(8, HIGH);
      delay(500);
    }
  }
  else{
    digitalWrite(8, LOW);
  }
//  IoTSerial.listen();
//  while(IoTSerial.available()){
//    if(IoTSerial.read() == '0'){
//      AndSerial.listen();
//      AndSerial.write('1');
//    }
//  }
}
  

