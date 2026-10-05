//week05_1_do_re_mi_Serial
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//USB Serial開始傳輸, 速度9600bps
  tone(8, 523, 100);
  delay(200);

  tone(8, 587, 100);
  delay(200);

  tone(8, 659, 100);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()){//如果USB Serial 有收到資料
      char c = Serial.read(); // 就讀進來
      if (c == '1') tone(8, 523, 100);//Do 1s
      if (c == '2') tone(8, 587, 100);//Re 1s
      if (c == '3') tone(8, 659, 100);//Mi 1s
    }
}
