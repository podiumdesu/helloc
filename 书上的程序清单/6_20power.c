//计算数的整数幂
#include <stdio.h>
double power (double n, int p);
int main (void){
    double num , pow;
    int rise_n;

    printf("Enter a number and the positive integer power to which\n");
    printf("the number will be raised.Enter q to quit\n");
    while (scanf("%lf%d",&num,&rise_n) == 2){
        pow = power (num , rise_n);
        printf("%.3g to the power %d is %.5g\n", num , rise_n , pow );
        printf("Enter next pair of numbers or q to quit\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");
}

double power (double n,int p){
    double pow = 1;
    int i;
    for (i = 0 ; i<p ; i++) {
        pow *= n;
    }
    return pow;
}
