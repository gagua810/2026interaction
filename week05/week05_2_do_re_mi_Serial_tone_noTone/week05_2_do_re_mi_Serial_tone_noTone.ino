//week05_2_do_re_mi_Serial_tone_noTone
//修改自week05_1_do_re_mi_Serial
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//USB Serial開始傳輸, 速度9600bps
  tone(8, 523, 100);delay(200);
  tone(8, 587, 100);delay(200);
  tone(8, 659, 100);delay(200);
  tone(8, 587, 100);delay(200);
  tone(8, 523, 100);delay(200);
}
char c = '0';//0:沒聲音 1:Do 2:Re 3:Mi
void loop() {
  if (Serial.available()){//如果USB Serial 有收到資料
      c = Serial.read(); // 就讀進來
      if (c == '0') noTone(8);
      if (c == '1') tone(8, 523);//Do 
      if (c == '2') tone(8, 587);//Re 
      if (c == '3') tone(8, 659);//Mi 
    }
}
