//使用嵌套循环，按下面的格式打印字母
//A
//BC
//DEF
//GHIJ
//KLMNO
//PQRSTU

#include <stdio.h>
#define ROW 6

int main (void){
    char ch = 'A';

    for (int i = 1; i < ROW+1 ; i ++){
        for (int j = 0; j < i ;  ch++ ,j++){
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}
