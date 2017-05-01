//
// Created by PetnaKanojo on 01/05/2017.
//



//将两个数组中相对应的元素相加


#include <stdio.h>
#define SIZE 5
void copy_arr(int *s1, int *s2, int *t);
int main (void) {
    int arr_1[SIZE];
    int arr_2[SIZE];
    int new_arr[SIZE];

    printf("Please input the arr_1 (5 integers)");
    for (int i = 0; i < SIZE; i++ ) {
        scanf("%d",&arr_1[i]);
    }
    printf("Please input the arr_2 (5 integers)");
    for (int i = 0; i < SIZE; i++ ) {
        scanf("%d",&arr_2[i]);
    }
    copy_arr(arr_1,arr_2,new_arr);
    for (int i = 0; i < SIZE; i++) {
        printf("%d ",new_arr[i]);
    }
    return 0;
}

void copy_arr(int *s1, int *s2, int *t) {
    for (int i = 0; i < SIZE; i++) {
        *t = *s1 + *s2;
        s1++;
        s2++;
        t++;
    }
}