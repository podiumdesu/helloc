//选择排序，从n个数中找出最大或最小的数放在数组的最前面或者最后

#include <stdio.h>
#include <string.h>
void swap (int * p1, int * p2);
int main (void) {
  int testnums;
  char c;
  int min;
  int length;
  int num[100];
  int j;
  c = getchar();
  getchar();
  length = c - '0';   //注意这里！！！！因为c是一个字符！！！！！！！
//printf("c=%d",c-'0');
  while (c != '0') {
    for (int i = 0; i < length; i++) {
      scanf("%d",&num[i]);
    }
    for (int i = 0; i < length; i++) {
//printf("max1=%d",max);
      min = num[i];
      int id = i;
      for (j = i+1; j < length; j++) {
        if (num[j] < min) {
          id = j;
//printf("max=%d",max);
        }
      }
      swap(&num[i],&num[id]);
    }
    for (int k = 0; k < length-1; k++) {
      printf("%d ",num[k]);
    }
    printf("%d",num[length-1]);
    printf("\n");
    getchar();
    c = getchar();
  }
  return 0;
}

void swap (int * p1, int * p2) {
  int temp;
  temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}
