//week01_4_painter_background_stroke
void setup(){
  size(500,500);
  background(255);
  strokeWeight(5);
}
void draw(){
  if(mousePressed){
    if (mouseButton==LEFT) stroke(0);
    if (mouseButton==RIGHT) stroke(255);
    line(mouseX, mouseY, pmouseX, pmouseY);
  }
}
