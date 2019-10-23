#include<Servo.h>
#define MAX_SIGNAL 2000
#define MIN_SIGNAL 700
#define ESC_PIN 3
Servo ESC;
int val;

void setup() {
Serial.begin(9600);
ESC.attach(ESC_PIN);
Serial.println("Wating For Input");

while(!Serial.available());
Serial.read();

Serial.println("This Program will Calibrate");
Serial.println("Now Writing Maximum Output");
ESC.writeMicroseconds(MAX_SIGNAL);
delay(10000);
Serial.println("Now Writing Minimum Output");
ESC.writeMicroseconds(MIN_SIGNAL);
delay(5000);
}

void loop() 
{
  val=1150;
  while(1)
  {
  if(val>=1000)
  {
  
  ESC.writeMicroseconds(val);
  delay(1000);
  Serial.println(val);
  val=val-10;
  }
  else
  {
    ESC.writeMicroseconds(1000);
  delay(1000);
  Serial.println(1000);
  }
  }
}
