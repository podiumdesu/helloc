//合并空格字符输出
//将输入的一行字符复制到输出，复制过程中将一个以上的空格字符用一个空格代替
//输入格式说明：每组测试数据输入占一行，遇文件尾测试结束
//输出格式说明：每组测试样例的输出结果占一行

#include <stdio.h>
int main (void) {

  int c;  //此处一定要是int才可以
  while((c = getchar()) != EOF) {
    if ( c == ' ') {
      c = getchar();
      while ( c == ' ') {
        c = getchar();
      }
      putchar(' ');
    }
    putchar(c);
  }
  return 0;
}
