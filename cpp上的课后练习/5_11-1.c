//将用分钟表示的时间转换成用小时和分钟表示的时间。
//使用define或const创建一个表示60的常量，通过while循环让用户重复输入值，直到用户输入小于或者等于0的数字才结束
#include <stdio.h>
#define TIME 60

int main (void){
    int time;
    int hour;
    int minute;
    printf("Please enter the number of minutes");
    scanf("%d",&time);

    while (time > 0){
        hour = time / TIME;
        minute = time % TIME;
        printf("%d minutes equal %d hours and %d minutes\n",time,hour,minute);
        printf("Please enter the number of minutes\n");
        scanf("%d",&time);
    }
    printf("hhhh,is it funny?");
}
