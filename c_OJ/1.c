//整数的二进制翻转

//描述：
//设计程序，将整数x从第p位开始向左n位（x从右往左编号为0~31）翻转，其余各位保持不变．
//输入：三个整数，分别是x,p,n
//输出：输出分为两行，第一行翻转前（每八位输出一个空格），第二行翻转后

//样例输入：
//15 0 32

//样例输出：
//00000000 00000000 00000000 00001111
//11111111 11111111 11111111 11110000


#include <stdio.h>
void PrintBit(int x) {
  int i;
  char display[31];
  for(i = 0; i < 32 ;i++){
    display[i] = (x % 2 == 0) ? '0' : '1';
    x >>= 1;
  }
  for (i = 31; i >= 24; i--) {
    putchar(display[i]);
  }
  printf(" ");
  for (i = 23; i >= 16; i--) {
    putchar(display[i]);
  }
  printf(" ");
  for (i = 15; i >= 8; i--) {
    putchar(display[i]);
  }
  printf(" ");
  for (i = 7; i >= 0; i--) {
    putchar(display[i]);
  }
  return;
}

int main (void) {
  unsigned int x, p, n;
  unsigned int mask = ~0;
  printf("请输入一个整数x，从p位开始向左n位翻转，(x从右向左编号为0~31)\n");
  scanf("%d %d %d", &x, &p, &n);
  PrintBit(x);
  printf("\n");
  mask <<= (32 - p - n);
  mask >>= (32 - n);
  mask <<= p;

  x ^= mask;
  PrintBit(x);
  printf("\n");

  return 0;

}

/*
#include <stdio.h>
void PrintBit(x) {
  char display[32];
  for(i  = 0; i <= 32 ;i++){
    display[i] = (x % 2 == 0) ? '0' : '1';
    putchar(display[i]);
  }
}
/*
int main (void) {
    int x, p, n;
    printf("Please input a number:\n");
    scanf("%d", &x);
    PrintBit(x)

    printf("%x",a);
    return 0;

}*/
