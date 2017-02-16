#include <stdio.h>

int main(void){
    int n, i ,j ,t;
    int array[100];    //不可以用char啊，char的整数类型是只有八位，最高只能到127！！！127+1=-128！！！
    int times;

    printf("Please define the length:\n");
    scanf("%d", &n);
    printf("%d",n);
    for (i = 0; i <n; i++) {
        printf("continue!");
        scanf("%d", &array[i]);
    }
    printf("i got it!\n");
    for (times = n-1; times > 0; times--){
        for (t = 0; t <times; t++){
            if (array[t] > array[t+1]) {

                j = array[t];
                array[t] = array[t+1];
                array[t+1] = j;

            }
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

}
