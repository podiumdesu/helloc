/*
将输入的一行字符逆序输出。例如，输入string，则输出gnirts。将逆序输出用递归函数实现。
输入：第一行为正整数N，表示有N行输入。接下来的N行，每行为一个输入的字符串。
输出：每行输入对应一行输出。
*/
#include <stdio.h>
#include <string.h>
int reverseString(char * string, int n, int i);

int main (void) {
  int rows;
  char string[100];
  int i = 0;
  int len;
  scanf("%d",&rows);
  getchar();
  while(rows--) {
    fgets(string,100,stdin);
    string[strlen(string) - 1] = '\0';
    len = strlen(string);
    reverseString(string, len, i);
    printf("%s\n",string);
  }
  return 0;
}

int reverseString(char * string, int n, int i) {
  int times;
  char temp;
  times = n / 2;
  if (i >= times) {
    return 0;
  } else {
    temp = string[i];
    string[i] = string[n-1-i];
    string[n-1-i] = temp;
    return reverseString(string, n, (i+1));
  }
}
