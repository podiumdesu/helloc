//使用嵌套循环
#include <stdio.h>
#define ROW 6
#define CHARS 10
int main (void){
    int row ;
    char chr;
    for (row = 1;row <=ROW ; row++){
        for (chr = 'A'; chr < 'A'+CHARS ;chr++ ){
            printf("%c",chr);
        }
        printf("\n");
    }
    return 0;
}
