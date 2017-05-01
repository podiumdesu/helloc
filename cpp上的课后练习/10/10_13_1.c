//
// Created by PetnaKanojo on 30/04/2017.
//
//使用带数组表示法的函数进行第一份拷贝
//使用带指针表示法和指针递增的函数
//第三个函数以目标数组名，源数组名和指向源数组最后一个元素后面的元素的指针


#include <stdio.h>
void copy_arr(double target1[], double source[], int n);
void copy_ptr(double *target2, double *source, int n);
void copy_ptrs(double *target3, double *source, double *source_end);

int main (void) {
    double source[5] = {1.1,2.2,3.3,4.4,5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(target1,source,5);
    copy_ptr(target2,source,5);
    copy_ptrs(target3,source,source+5);
    printf("\nsource[5] = ");
    for (int i = 0; i < 5; i++) {
        printf("%f ",source[i]);
    }
    printf("\ntarget1[5] = ");
    for (int i = 0; i < 5; i++) {
        printf("%f ",target1[i]);
    }
    printf("\ntarget2[5] = ");
    for (int i = 0; i < 5; i++) {
        printf("%f ",target2[i]);
    }
    printf("\ntarget3[5] = ");
    for (int i = 0; i < 5; i++) {
        printf("%f ",target3[i]);
    }

    return 0;
}

void copy_arr(double target1[], double source[], int n) {
    for (int i = 0; i < n ; i++) {
        target1[i] = source[i];
    }
}

void copy_ptr(double *target2, double *source ,int n) {
    for(int i = 0; i < n ; i++ ) {
        *target2 = *source++;
        target2++;
    }
}

void copy_ptrs(double *target3, double *source, double *source_end) {
    for (int i = 0 ; ; i++) {
        if (*source == *source_end) {
            break;
        }
        *target3 = *source++;
        target3++;
    }
}