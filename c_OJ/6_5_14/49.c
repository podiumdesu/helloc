//编写程序实现对多个字符串的连接
//每组输入从一个整数n开始，接下来的n行是n个需要连接的字符串，当n为0时，程序结束运行

#include <stdio.h>
#include <stdlib.h>
char * mystrcat(char *s1, int rows);

int main (void) {
  int rows;
  scanf("%d",&rows);
  int ROW = rows;
  getchar();
  char * str[rows];   //定义一个数组指针
  int i = 0;
  while (rows != 0) {
    *(str+i) = malloc(sizeof(char)*100);
    fgets(*(str+i),100,stdin);
    i++;
    rows--;
  }
  /*

  *(ptr) = "sdsds"  *(ptr+1) = "dfqer" *(ptr+2)="dsa"

  */

  return 0;
}
