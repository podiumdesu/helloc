//提示用户输入大写字母，使用嵌套循环以下面金字塔型的格式打印字母
//    A
//   ABA
//  ABCBA
// ABCDCBA
//ABCDEDCBA

//每行使用3个内层循环，分别处理空格、以升序打印字母、以降序打印字母

#include <stdio.h>

int main (void){
    char ch;
    int i,j,p;
    printf("Please enter an uppercase character\n");
    scanf("%c",&ch);
    int ROW = (ch -'A');
    for (int i= 0;i<= ROW ;i++){
        for (int j= ROW -i;j>0;j--){
            printf(" ");
        }
        for (ch = 'A',p = 0 ; p<i+1; p++,ch++){   //这里的循环条件简直是乱七八糟的。。
            printf("%c",ch);
        }
        for (;p>1;p--,ch--){
            printf("%c",ch-2); //上一个循环结束的时候把ch也++了，要注意！！！！！
        }
        printf("\n");
    }
    return 0;
}
