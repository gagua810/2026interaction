// week02_4_arduino_tone_do_523_re_587_mi_659_delay_1000
void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  //上面的setup()只做一次
  tone(8, 523, 1000); // Do 0.1秒
  delay(1000);
  tone(8, 587, 1000);
  delay(1000);
  tone(8, 659, 1000);
}
  
void loop() {
  // put your main code here, to run repeatedly:
  //下面會一直loop重複做, 不會停
}
