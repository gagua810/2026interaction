//week02_2_arduino_void_setup_void_loop
void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8, HIGH);//發出高電位
  delay(1000);//等1秒
  digitalWrite(8, LOW);//送出低電位
  delay(1000);//等1秒
}
