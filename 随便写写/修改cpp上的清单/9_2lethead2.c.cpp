//根据用户输入在前方添加相应长度的空格
//一个相当于形成一个像信件封面一样的东西

#include <stdio.h>
#include <string.h>
#define WIDTH 40

#define SPACE ' '

void show_n_char(char ch,int length);

int main (void){

    char NAME[100], ADDRESS[100],PLACE[100];

    printf("This is a showbar!\n");
    printf("Please input your name\n");
    scanf("%s",&NAME);
    printf("Then,please input your address\n");
    scanf("%s",&ADDRESS);
    printf("At last,please input your living place\n");
    scanf("%s",&PLACE);
    printf("hello,world\n");

    show_n_char('*',WIDTH);
    putchar('\n');

    int length_1,length_2,length_3;
    length_1 = (WIDTH - strlen(NAME)) / 2;
    show_n_char(SPACE,length_1);
    printf("%s\n",NAME);

    length_2 = (WIDTH - strlen(ADDRESS))/ 2;
    show_n_char(SPACE,length_2);
    printf("%s\n",ADDRESS);

    length_3 = (WIDTH - strlen(PLACE)) / 2;
    show_n_char(SPACE,length_3);
    printf("%s\n",PLACE);

    show_n_char('*',WIDTH);

    return 0;
}

void show_n_char(char ch,int length){
    int i = 0;
    while (i < length){
        printf("%c",ch);
        i += 1;
    }
}
