//宏定义控制电文输出
#include <stdio.h>
#include <stdlib.h>

#define CHANGE(c) = ((c) % 2)

int main (void) {
  int rows;
  char input;
  int input_num;
  scanf("%d",&rows);
  while (rows --) {
    c = getchar();
    input_num = c;
    if (CHANGE(input_num)) { //改变大小写
      while (c != '\n' && c != 'EOF') {
        if (c <= 'z' && c >= 'a') {
          c = touppercase(c);
        } else if (c <= 'Z' && c >= 'A') {
          c = tolowercase(c);
        } else {
          continue;
        }
        putchar(c);
        c = getchar();
      }
    } else {  //原文输出
      while (c != '\n' && c != 'EOF') {
        putchar(c);
        c = getchar();
      }
    }
  }
  return 0;
}
