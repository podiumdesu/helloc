//第k个数
//输入正整数n和k，输出n中从右端开始第k个数字的值。
//将求n中右端第k个数字定义成函数，如果k超过了n的位数，则函数返回-1，否则返回n中第k个数字

#include <stdio.h>
#include <string.h>
void whichNumber (int n[], int k);
int main (void) {
  int k;
  char n[100];
  while (scanf("%s%d",&n,&k) != EOF ) {
    whichNumber(n[100],k);
  }
  return 0;
}
void whichNumber (int n[], int k) {
  int length;
  length = strlen(n);
  if (k > length) {
    printf("%d",-1);
  } else {
    printf("%c",n[length-k]);
  }
}
