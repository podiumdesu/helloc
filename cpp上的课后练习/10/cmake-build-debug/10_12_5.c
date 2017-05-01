//
// Created by PetnaKanojo on 29/04/2017.
//
#include <stdio.h>
int main (void) {
    int (*ptr)[2];  //ptr指向数组
    int torf[2][2] = {12,14,16};
    ptr = torf;

    printf("%d %d",**ptr,**(ptr+1));

    printf("\ntest2\n");
    int (*ptr2)[2];  //ptr指向一个内含两个int类型值的数组
    //如果是 int * ptr[2]
    //指的是 ptr是一个内含两个指针元素的数组，每个元素都指向int的指针
    int torf2[2][2] = {{12},{14,16}};
    ptr2 = torf2;
    printf("%d %d",**ptr2,**(ptr2+1));
    return 0;

}
