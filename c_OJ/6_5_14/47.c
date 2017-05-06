/*从键盘输入n个整数并放到数组x中，编写一个函数，它将数组x中的元素颠倒后仍然存放在原数组中。
要求始终只用一个数组，并且在调用函数main中输出颠倒顺序后数组x中的各个元素。

输入：第一行为正整数N，表示有N组输入；每组输入包含两行，第一行为整数个数n，第二行为n个整数。
输出：每组输入对应一行输出，输出颠倒后的整数，两个整数间用空格隔开，最后一个整数后无空格
*/

#include <stdio.h>
void swap (int *, int *);
int main (void) {
  int rows;
  int size;
  scanf("%d",&rows);
  while (rows--) {
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++) {
      scanf("%d",&arr[i]);
    }
    int * ptr;
    ptr = arr;
    int num = size;
    for (int i = 0; i < (size / 2); i++) {
      swap(ptr+i,ptr+num-1);
      num--;
    }
    for (int i = 0; i < size - 1; i++) {
      printf("%d ",arr[i]);
    }
    printf("%d\n",arr[size-1]);
  }
  return 0;
}

void swap (int *p1, int *p2) {
  int temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}
