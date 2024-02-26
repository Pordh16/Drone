#include <Servo.h> 
Servo esc1,esc2,esc3,esc4; // Object from class

void setup() {
 
  esc1.attach(PA8); //Set I/O PWM    //ทวน
  esc2.attach(PB3); //Set I/O PWM    //ตาม
  esc3.attach(PB10); //Set I/O PWM   //ทวน
  esc4.attach(PA15); //Set I/O PWM   //ตาม
  
  esc1.writeMicroseconds(2000); //Set max pulse-width   //ทวน
  esc1.writeMicroseconds(1000); //Set min pulse-width

  esc2.writeMicroseconds(2000); //Set max pulse-width   //ตาม
  esc2.writeMicroseconds(1000); //Set min pulse-width

  esc3.writeMicroseconds(2000); //Set max pulse-width   //ทวน
  esc3.writeMicroseconds(1000); //Set min pulse-width

  esc4.writeMicroseconds(2000); //Set max pulse-width   //ตาม
  esc4.writeMicroseconds(1000); //Set min pulse-width
  
}

void loop() {
  
// for(int i = 1000; i <= 2000; i++)        //ตาม
//  {
//    esc1.writeMicroseconds(i);
//    delay(5);
//    esc3.writeMicroseconds(i);
//    delay(5);
//  }
//  delay(1000);

  for(int i = 1000; i <= 2000; i++)        //ตาม
  {
    esc1.writeMicroseconds(i);
    delay(5);
    esc3.writeMicroseconds(i);
    delay(5);
    esc2.writeMicroseconds(i);
    delay(5);
    esc4.writeMicroseconds(i);
    delay(5);
  }
  delay(1000);
   
}
