//week01_5_google_gemini_mouse_wheel
//google gemini:Processing how to use mouse wheel
float circleSize = 50;

void setup(){
  size(400, 400);
}

void draw(){
  background(220);
  ellipse(width / 2, height / 2, circleSize, circleSize);
}

void mouseWheel(MouseEvent event){
  float e = event.getCount();
  
  circleSize -= e*5;
  
  circleSize = constrain(circleSize, 10, 300);
}
