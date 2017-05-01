//
// Created by PetnaKanojo on 01/05/2017.
//
//返回最大值和最小值的差值

#include <stdio.h>
int max(int *, int );
int main (void) {
    printf("please input the integers and will return you the difference between the max and the min");
    //
    //
    //如何未知多少的情况下读入数组
    //
    //
    int result;
    int array[5];
    for (int i = 0 ; i < 5; i++) {
        scanf("%d",&array[i]);
    }
    result = max(array,5);
    printf("The max is %d",result);

    return 0;

}

int max (int *x , int n) {
    int max = *x;
    int min = *x;
    int next;

    int *ptr = x+1;
    for (int i = 1; i < n; i++ ) {
        next = *(ptr);
        if (max < next) {
            max = next;
        }
        if (min > next) {
            min = next;
        }
        ptr++;
    }
    return max - min;
}