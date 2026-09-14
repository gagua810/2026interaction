//week02_1_void_setup_void_draw_fill_textSize_text_key
//鍵盤的操作,與上週的mouse結合
//FIle-Preference字形放大
void setup(){//設定的函式
  size(500, 500);
}
void draw(){
  if(mousePressed) background(#64FFE4);
  else background(#FA7900);//用Tool-Color選擇器
  fill(0, 0, 255);//蓝色填充色
  textSize(80);//字的大小
  text("key:" + key, 200, 300);//注音輸入法關掉才能收到key
}
