//
// Created by PetnaKanojo on 01/05/2017.
//

//拷贝二维数组

//int (*ptr)[2]  指向内含2个int类型值的数组的指针，后面的[]用来描述指针所指向数据对象的类型


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
