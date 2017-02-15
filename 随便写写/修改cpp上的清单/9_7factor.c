//使用循环和递归计算阶乘

#include <stdio.h>
#include <string.h>
long fact(int n);

int main(void) {
    int num;

    printf("Please input an integer(0-12)\n");
    while (scanf("%d", &num) == 1) {
        if (num < 0) {
            printf("No negative numbers,please.\n");
        } else if (num > 12) {
            printf("Keep input under 13\n");
        } else {
            printf("loop:%d factorial = %ld\n", num, fact(num));
        }

        printf("Please enter an integer(0-12)\n");

    }


}

long fact(int num) {

    long ans;


    if (num > 1) {
        ans = num * fact(num - 1);
    } else {
        ans = 1;
    }
    return ans;
}
