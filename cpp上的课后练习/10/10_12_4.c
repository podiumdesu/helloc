//
// Created by PetnaKanojo on 29/04/2017.
//
#include <stdio.h>
int main (void) {
    int *ptr;
    int torf[2][2] = {12,14,16};
    ptr = torf[0];
    printf("%d %d\n",*ptr,*(ptr+2));


    int *ptr2;
    int torf2[2][2] = {{12},{14,16}};
    ptr2 = torf2[0];
    printf("result = %d %d\n",torf2[0][0],torf2[1][0]);
    printf("%d %d\n",*ptr2,*(ptr2+2));

    int *ptr3;
    int torf3[3][2] = {{12},{14,16},{1,2}};
    ptr3 = torf3[0];
    /*  int result;
      result= torf2[0][1];
      printf("result = %d\n",result);*/
    printf("result = %d %d\n",torf3[0][0],torf3[1][0]);
    printf("%d %d\n",*ptr3,*(ptr3+4));   //注意指向一维数组的指针++后相隔的int数


    return 0;
}


