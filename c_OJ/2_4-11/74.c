//验证哥德巴赫猜想
//证明任何充分大（>=4）的偶数都可以用两个素数的和表示，将输入的偶数用两个素数之和的形式输出


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int is_Prime (int x) {
  int counts = 0;
  for (int i = 2; i <= sqrt(x) ; i++) {
    if (x % i == 0) {
      counts ++;
    }
  }
  if (counts != 0) {
    return 0;
  } else {
    return 1;
  }
}
int main (void) {
  int number;
  int rows;
  scanf("%d",&rows);
  while (rows--) {
    scanf("%d",&number);
    for (int i = 2; i < number; i++) {
      if (is_Prime(i) && is_Prime(number-i)) {
        printf("%d=%d+%d\n",number,i,(number-i));
        break;
      }
    }
  }
  return 0;
}
