/*型变量占4字节，其中每个字节又分成高4位和低4位。
试从该整型变量的高字节开始，依次取出每个字节的高4位和低4位，并以其值的ASCII码形式进行显示。<br />
输入格式：每组数据输入整数n，输入遇文件结尾结束；
*/

#include <stdio.h>
int main (void) {

  //为什么long int 不可以！！！
  unsigned int num;  //占四个四节，int型占两个字节
  while (scanf("%d",&num) != EOF) {
    for (int i = 0; i < 7; i++) {
      long int mask = ~0;
      char c = num  >> 28;
      //printf("num:%d\n",num);
      printf("%d(%c) ",c,c);
      num <<= 4;
    //  printf("num:%d\n",num);

    }

    long int mask = ~0;
    char c = num  >> 28;
    printf("%d(%c) \n",c,c);

  }
  return 0;
}
