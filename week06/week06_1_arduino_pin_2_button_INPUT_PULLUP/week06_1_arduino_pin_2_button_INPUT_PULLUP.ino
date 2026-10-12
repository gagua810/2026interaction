//week06_1_arduino_pin_2_button_INPUT_PULLUP
void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(8, OUTPUT);
  tone(8, 523, 100);
}

void loop() {
  if ( digitalRead(2) == LOW){
    tone(8, 523, 100);
    delay(100);  
  }
}
