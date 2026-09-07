//week01_3_painter_
void setup(){
  size(500,500);
}
void draw(){
  if (mouseButton==LEFT) stroke(255, 0, 0);//red line
  if (mouseButton==CENTER) stroke(0, 255, 0);//green line
  if (mouseButton==RIGHT) stroke(0, 0, 255);//blue line
  if(mousePressed) line(mouseX, mouseY, pmouseX, pmouseY);
}
