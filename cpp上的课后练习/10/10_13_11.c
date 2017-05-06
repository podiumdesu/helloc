//
// Created by PetnaKanojo on 01/05/2017.
//


//编写一个程序，声明一个3x5二维数组，一个函数显示数组的内容，再编写一个函数将各元素的值翻倍
//这两个函数都以函数名和行数作为参数


#include <stdio.h>
#include <stdlib.h>

typedef int (*arr_t)[5];

void print_arr(int (*arr)[5] , int ,int );
void twice_arr(int (*arr)[5] , int ,int );
int** threetimes_arr(int (*arr)[5], int rows, int cols);

int main (void) {

  printf("Please input the array");
  int array[3][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
  print_arr(array,3,5);
  twice_arr(array,3,5);
  int (*ptr)[5];
  ptr = threetimes_arr(array,3,5);
  printf("\n\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j< 5; j++) {
      printf("%4d ",3* (*(*(ptr+i)+j)));
    }
    printf("\n");
  }
  printf("bye");
  return 0;

}

void print_arr (int (*arr)[5], int rows, int cols) {
  printf("The original array is :\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j< cols; j++) {
      printf("%4d ",(*(*(arr+i)+j)));
    }
    printf("\n");
  }
}

void twice_arr (int (*arr)[5] , int rows, int cols) {
  printf("and This is the twice value of this array!!\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j< cols; j++) {
      printf("%4d ",2* (*(*(arr+i)+j)));
    }
    printf("\n");
  }
  printf("\nThis is just a test\n");
  for (int i = 0,count = 1; i < cols*rows; i++) {
    printf("%4d ", arr[0][0]+i);
    if (count == 5) {
      printf("\n");
      count = 0;
    }
    count ++;
  }
}

int** threetimes_arr(int (*arr)[5], int rows, int cols) {
  int (*new)[5] = malloc(sizeof(int)*15);
  for (int i = 0 ; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      new[i][j] = *(*(arr+i)+j);
    }
  }
  return new;
}
