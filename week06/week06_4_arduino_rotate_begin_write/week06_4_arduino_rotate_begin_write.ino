//week06_4_arduino_rotate_begin_write
//修改自week06_2_arduino_button_change_mode_LED_flow
int mode = 0;//0:小變大
void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  for (int i=3; i<=13; i++){
      pinMode(i, OUTPUT);
    }
    tone(8, 523, 100);delay(100);
    tone(8, 784, 100);delay(100);
}
int prev = HIGH, now = 3;
void loop() {
  if( prev == HIGH && digitalRead(2) == LOW){
    if (mode==0) {
      mode = 1;
      tone(8, 784, 100);delay(100);
      tone(8, 523, 100);delay(100);
    }
    else {
      mode = 0;
      tone(8, 523, 100);delay(100);
      tone(8, 784, 100);delay(100);
    }
    prev = LOW;

    if(mode==1) Serial.write('1');
    if(mode==0) Serial.write('0');
  } else if (prev == LOW && digitalRead(2) == HIGH){
    prev = HIGH;
  }
  if (mode==0){
    now++;
    if(now>13) now = 3;
    digitalWrite(now, HIGH);
    delay(100);
    digitalWrite(now, LOW);
  } else{
    now--;  
    if(now<3) now = 13;
    digitalWrite(now, HIGH);
    delay(100);
    digitalWrite(now, LOW);
  }
}
