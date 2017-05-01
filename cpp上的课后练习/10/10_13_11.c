//
// Created by PetnaKanojo on 01/05/2017.
//


//编写一个程序，声明一个3x5二维数组，一个函数显示数组的内容，再编写一个函数将各元素的值翻倍
//这两个函数都以函数名和行数作为参数


#include <stdio.h>
int main (void) {
    int arr[3][5] = {1,1,1,1,1,2,2,2,2,2,3,3,3,3,3};
    print_arr(arr,3);
    twice_arr(arr,3);
    return 0;
}

void print_arr(int (*ptr)[5] , int n) {
    for (int i = 0; i < n; i++) {

    }
}




#include <stdio.h>
void copy_arr(double (*t)[3], double (*s)[3]);
int main (void) {
    double target[2][3];
    double *ptr=(double *)target;
    double two_arr[2][3] = {11.1,12.2,13.3,14.4,15.5,16.6};
    copy_arr(target,two_arr);
    for (int i = 0; i < 6; i++ ) {
        printf("%lf ",*ptr);
        (ptr)++;
    }
}


void copy_arr(double (*t)[3], double (*s)[3]) {
    for (int i = 0; i < 6; i++ ) {
        *((double *)t+i) = *((double *)s+i);
    }

}
