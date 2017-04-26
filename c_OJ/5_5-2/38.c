//输入一个十六进制字符串，将其转换成对应的整数并输出转换结果
//输入：第一行表示有n组数据，之后每组输入对应一行，为一个十六进制字符串
//输出：每组输入对应一行输出，输出转换后的十进制整数

#include <stdio.h>
#include <string.h>
#define SIZE 20
int multiply (int p);
int main (void) {
  int rows;
  char num[SIZE];
  int result;
  int length;
  int k;

  scanf("%d",&rows);
  while (rows--) {
    result = 0;
    scanf("%s",num);
    length = strlen(num);
//    printf("%d  ",length);
      for(int i = 2; i < length; i++) {
        if (num[i] <= 'z' && num[i] >= 'a') {
          result += ((num[i]-'a') + 10) * multiply(length - i);
        } else if (num[i] <= 'Z' && num[i] >= 'A') {
          result += ((num[i]-'A') + 10) * multiply(length - i);
        } else {
          result += (num[i]-'0') * multiply(length - i);
//          printf("%dsss",result);
        }
     }
     printf("%d\n",result);
  }
  return 0;
}

int multiply (int p) {
  int result;
  result = 1;
  for (int i = 1; i < p; i++) {
    result *= 16;
//    printf("%d  ",result);
  }
  return result;
}
