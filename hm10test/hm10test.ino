#include <SoftwareSerial.h>

SoftwareSerial mySerial(2,3);
int ledpin = 13;

void setup() {
  // put your setup code here, to run once:
  mySerial.begin(9600);
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//  int i;
//  if (mySerial.available()){
//    Serial.println("received data");
//    i = mySerial.read();
//    Serial.println(i);
//    if (i == '1'){
//      digitalWrite(ledpin, 1);
//      Serial.println("LED on");
//    }
//    if (i == '0'){
//      digitalWrite(ledpin, 0);
//      Serial.println("LED off");
//    }
//  }
  mySerial.write("testing");
  int i = mySerial.read();
  Serial.print(i);
  Serial.print(",");
  Serial.println(mySerial.available());
  delay(500);
}
