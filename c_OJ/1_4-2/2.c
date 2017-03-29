//循环移位
//将整数x向右循环移位n位

//输入：整数x和移位数n
//输出：输出移位后的结果，并以换行符'\n'结束


#include<stdio.h>
int main (void) {
  int x, n; //输入整数x和移位数n
  scanf("%d %d",&x, &n);
  unsigned int mask1 = ~0;
  unsigned int mask2 = ~0;

  mask2 = mask2 << (32 - n % 32) >> (32 - n % 32);
  mask2 = (mask2 & x) << (32 - n % 32);
  mask1 = mask1 >> (n % 32) << (n % 32);
  mask1 = (mask1 & x) >> (n % 32);
  x = mask1 | mask2;
  printf("%d",x);
  printf("\n");
}
