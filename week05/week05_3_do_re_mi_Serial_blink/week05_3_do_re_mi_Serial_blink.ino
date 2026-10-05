//week05_3_do_re_mi_Serial_blink
//修改自week05_2_do_re_mi_Serial_tone_noTone
void setup() {
  pinMode(8, OUTPUT);//Buzzer 8 聲音
  pinMode(10, OUTPUT);//對應'0'
  pinMode(11, OUTPUT);//對應'1'
  pinMode(12, OUTPUT);//對應'2'
  pinMode(13, OUTPUT);//對應'3'
  
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
    }
    for(int i=10; i<=13; i++) digitalWrite(i, LOW);
    if(c>='0' && c<='3') digitalWrite(c-'0'+10, HIGH);
    if (c == '0') noTone(8);
    if (c == '1') tone(8, 523);//Do 
    if (c == '2') tone(8, 587);//Re 
    if (c == '3') tone(8, 659);//Mi 
    
}
