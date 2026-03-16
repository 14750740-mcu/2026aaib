// week04-2好玩的程式設計 Processing for(迴圈)+if(判斷)
//Ctrl-N可開新的视窗來寫程式

void setup(){// 設定的函式
  size(800, 200); //視窗大小800x200
}
void draw(){ //畫圖的函式
  for (int x=0; x<800; x += 100) { //for(迴圈)
    //Tool-色彩選擇器，可以選你要的色彩，再Copy複製，再Ctrl-V
    //下面的 if 是判断 mouse的X座標，是否夹在x.x+100中間
    if (x < mouseX && mouseX < x+100) fill(#FF8F05); // 設定「橘色」
    else fill (#FFFFF2); // 否則,設定填充「淡黃色」
    rect(x, 0, 100, 100);
   }
}
