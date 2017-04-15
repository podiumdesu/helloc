//投骰子，反正规则有点恶心，直接去OJ上看吧
#include <stdio.h>
int allSums (int x);
int zeroToSix (int x);

int main (void) {
  int rows;
  int a,b;
  int result;
  int expected_num;
  int a_sum,b_sum;

//  printf("Please input a number\n");
  scanf("%d",&rows);
  while(rows--) {
  //  printf("Please input two numbers to start\n");
    scanf("%d%d",&a,&b);
    a_sum = allSums(a)+1;
    b_sum = allSums(b)+1;
  //  printf("a_sum=%d,b_sum=%d ",a_sum,b_sum);
    result = zeroToSix(a_sum % 6) + zeroToSix(b_sum % 6);
  //  printf("result = %d\n",result);
    if (result == 7 || result == 11) {
      printf("success!\n");
      continue;
    } else if (result == 2 || result == 3 || result == 12) {
      printf("fail!\n");
      continue;
    } else {
      expected_num = result;
      do {
    //    printf("expect_num = %d ",expected_num);
        a++;
        b++;
        a_sum = allSums(a) + 1;
        b_sum = allSums(b) + 1;
    //    printf("a_sum=%d,b_sum=%d ",a_sum,b_sum);
        result = zeroToSix(a_sum % 6) + zeroToSix(b_sum % 6);
    //    printf("result = %d\n",result);
        if (result == 7) {
          printf("fail!\n");
          break;
        }
      } while (result != expected_num);
      if (result != 7) {
        printf("success!\n");
      }
    }
  }
  return 0;
}

int allSums (int x) {
  int sum = 0;
  do {
    sum += (x % 10);
    x = x / 10;
  } while (x != 0);
  return sum;
}

int zeroToSix (int x) {
  if (x == 0) {
    return 6;
  } else {
    return x;
  }
}
