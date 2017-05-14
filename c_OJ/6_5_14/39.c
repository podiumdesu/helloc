/*
编写一个测试一个串是否为回文的递归函数，是回文，返回1；不是，返回0。
并在主函数调用该函数，判断输入的字符串是否为回文串。
回文是正读和反读都一样的串。
输入：第一行为正整数N，表示有N组输入数据；每组输入对应一行，为一个字符串。
输出：每组输入对应一行输出，
若输入的字符串是回文则输出“Yes!”，否则输出“No!”
*/


#include <stdio.h>
#include <string.h>
int isHuiwen(char * string, int n, int i);

int main (void) {
  int rows;
  int len;
  int i = 0;
  char string[100];
  scanf("%d",&rows);
  getchar();
  while(rows--) {
    fgets(string,100,stdin);
    //printf("%ld",strlen(string));
    len = strlen(string);
    string[len - 1] = '\0';
    len = strlen(string);
    if(isHuiwen(string,len,i)) {
      printf("Yes!\n");
    } else {
      printf("No!\n");
    }
  }
  return 0;
}

int isHuiwen(char * string, int n, int i) {
  int times;
  times = n / 2;
    if (i >= times) {
      return 1;
    } else {
      if ( *(string + i) == *(string + n - 1 - i) ) {
        return isHuiwen(string, n, (i+1));
      } else {
        return 0;
      }
    }
}
