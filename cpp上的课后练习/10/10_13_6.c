//
// Created by PetnaKanojo on 01/05/2017.
//
//将double数组中的数据倒序排列

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
double * reverse(double *, int);

int main (void) {
    double array[SIZE];
    double new_arr;
    double *ptr;
    printf("please input the number");
    for (int i = 0; i < SIZE; i++) {
        scanf("%lf",&array[i]);
    }
    ptr = reverse(array,5);
    for (int i = 0; i < SIZE; i++) {
        new_arr = *ptr;
        printf("%f ",new_arr);
        ptr++;

    }
    return 0;
}

double * reverse(double *x, int n) {
    double *new_x=malloc(sizeof(double)*n);   //要给函数里的数组分配地址哦qaq
    for (int j = n-1,i = 0; j >= 0; j--,i++) {
        new_x[i] = *(x + j);
    }
    return new_x;
}

