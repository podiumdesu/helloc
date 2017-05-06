/*
输入10个数，用冒泡法对其进行排序并输出排序后的结果。要求用指针形式冒泡排序法实现。
输入格式：每组输入占一行，一行10个整数，遇文件尾测试结束；*/


#include <stdio.h>
void bubblesort(int *);

int main (void) {
  int num[10];
  while (scanf("%d",&num[0]) != EOF) {
    for (int i = 1; i < 10; i++) {
      scanf("%d",&num[i]);
    }
    bubblesort(num);
    for (int i = 0; i < 9; i++) {
      printf("%d->",num[i]);
    }
    printf("%d\n",num[9]);
  }
  return 0;
}


void bubblesort(int * s) {
  for (int i = 0; i < 10; i++) {
    for (int j = 10 - 1 ; j > i; j--) {
      if (*(s+j) < *(s+j-1)) {
        int temp = *(s+j);
        *(s+j) = *(s+j-1);
        *(s+j-1) = temp;
      }
    }
  }
}
