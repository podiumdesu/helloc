//宏定义控制电文输出
#include <stdio.h>
#include <ctype.h>
#define CHANGE(c)  ((c) % 2)

int main (void) {
  int rows;
  char c;
  int input_num;
  scanf("%d",&rows);
  c = getchar();
  while (rows --) {
    c = getchar();
    input_num = c;
//    printf("%c%d\n",c,input_num);

    if (CHANGE(input_num)) { //改变大小写
      while (c != '\n') {
        if (c <= 'z' && c >= 'a') {
          c = toupper(c);
        } else if (c <= 'Z' && c >= 'A') {
          c = tolower(c);
        } else {
        }
        putchar(c);
        c = getchar();
      }
      printf("\n");
    } else {  //原文输出
      while (c != '\n') {
        putchar(c);
        c = getchar();
      }
      printf("\n");
    }
  }
  return 0;
}
