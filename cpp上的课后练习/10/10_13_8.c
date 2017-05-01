//
// Created by PetnaKanojo on 01/05/2017.
//
//将内含7个元素的数组中的第3-5元素拷贝至内含3个元素的数组中。


#include <stdio.h>
#define POSITION 2
void copy_arr3(int *, int *, int);

int main (void) {
    int array[7];
    int target[3];

    printf("Please input seven integers");
    for (int i = 0 ; i < 7; i++) {
        scanf("%d",&array[i]);
    }
    copy_arr3(target,array+POSITION,3);
    for (int i = 0; i < 3; i++) {
        printf("%d ",target[i]);
    }
    return 0;
}

void copy_arr3(int *t, int *s ,int n) {
    for (int i = 0; i < n; i++) {
        *t = *s;
        t++;
        s++;
    }
}