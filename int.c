#include <stdio.h>

int main(void){
  int a, b, c, d;
  a = 0;   //文字を定義
  b = 4;
  c = -3;

  printf("a = %d", a);    //変数をprintfで表示させたいときは左のようにする(%何とかはint,float等の型によって変わる
  
  d = a + b + c;
  printf("a + b + c = %d\n", d);  //\nは改行するという意
  printf("d = %d", a + b + c);    //dと置くのではなく計算式を入れても良い

}
