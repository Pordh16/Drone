/*void FLY() {
  esc1.writeMicroseconds(2000); //Set max pulse-width   //ทวน
  esc1.writeMicroseconds(1000); //Set min pulse-width

  esc2.writeMicroseconds(2000); //Set max pulse-width   //ตาม
  esc2.writeMicroseconds(1000); //Set min pulse-width

  esc3.writeMicroseconds(2000); //Set max pulse-width   //ทวน
  esc3.writeMicroseconds(1000); //Set min pulse-width

  esc4.writeMicroseconds(2000); //Set max pulse-width   //ตาม
  esc4.writeMicroseconds(1000); //Set min pulse-width

  for (int i = 1000; i <= 2000; i++) {
    esc2.writeMicroseconds(i);
    esc4.writeMicroseconds(i);
    esc1.writeMicroseconds(i);
    esc3.writeMicroseconds(i);
  }
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
*/
