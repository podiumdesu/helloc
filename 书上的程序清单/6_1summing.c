//计算输入的整数的值
#include <stdio.h>
int main (void){
    int sum, status , num;
    sum =0;
    printf("Please enter an integer");
    printf(" (q to quit)\n");
    status = scanf("%d",&num);
    while (status == 1){
        sum = sum + num;
        printf("Please enter another integer");
        printf(" (q to quit)\n");
        status = scanf("%d",&num);
    }
    printf("The sum of these integers is %d\n",sum);
    printf("THANKS FOR USING!\n");
}
