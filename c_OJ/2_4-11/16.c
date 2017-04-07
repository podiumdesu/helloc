//斐波那契数列
//输入斐波那契数列的前n项。（n>=3）
//输入：有多组输入，每行是一个整数n，当输入为0时，程序结束运行
//输出：对于每组输入n，每行输出8个数，每个数的宽度为10（右对齐），否则输出Error!。两组输出用空行隔开。

#include <stdio.h>
int main (void) {
  int length, num_1, num_2, num_3;
  while(scanf("%d",&length) && length) {
    if (length < 3){
      printf("Error!\n\n");
      continue;
    }

    num_1 = 1;
    num_2 = 1;
    printf("%10d%10d",num_1,num_2);
    for (int i = 3; i <= length; i++) {
      num_3 = num_2 + num_1;
      printf("%10d",num_3);
      if (!(i%8)) putchar('\n');
      num_1 = num_2;
      num_2 = num_3;
    }
    if (length%8)  putchar('\n');
    putchar('\n');
  }

  return 0;
}
