#include <Servo.h>

Servo esc1;
Servo esc2;
Servo esc3;
Servo esc4;

void setup() {
  Serial.begin(9600);
  esc1.attach(PA8); //Set I/O PWM    //ทวน
  esc2.attach(PB3); //Set I/O PWM    //ตาม
  esc3.attach(PB10); //Set I/O PWM   //ทวน
  esc4.attach(PA15); //Set I/O PWM   //ตาม
  
  esc1.writeMicroseconds(1000);
  esc3.writeMicroseconds(1000);
  esc2.writeMicroseconds(1000);
  esc4.writeMicroseconds(1000);
  delay(1000);
  
}

void loop() {
  FLY();
}

void FLY() {
  esc1.writeMicroseconds(2000);
  esc3.writeMicroseconds(2000);
  esc2.writeMicroseconds(2000);
  esc4.writeMicroseconds(2000);
  delay(5000);
}

void forward() {
  esc1.writeMicroseconds(1500);
  esc2.writeMicroseconds(1500);
  esc3.writeMicroseconds(1500);
  esc4.writeMicroseconds(1500);
}

void backward() {
  esc1.writeMicroseconds(1300);
  esc2.writeMicroseconds(1700);
  esc3.writeMicroseconds(1300);
  esc4.writeMicroseconds(1700);
}

void left() {
  esc1.writeMicroseconds(1700);
  esc2.writeMicroseconds(1300);
  esc3.writeMicroseconds(1700);
  esc4.writeMicroseconds(1300);
}
