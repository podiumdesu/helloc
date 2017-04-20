
//回文电报输出
//CHANGE = c % 2

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define CHANGE flag
int main(void)
{
    char s[100];
    int flag;
    int rows;
    int len;
    scanf("%d",&rows);
    getchar();
    while (rows --) {
        while(fgets(s,100,stdin)) {
            flag = s[0]%2;
            len = strlen(s);
            int i;
            if(CHANGE) {
                for(i=0;i<len;i++) {
                    if(isupper(s[i])){
                      putchar(tolower(s[i]));
                    }
                    else if (islower(s[i])) {
                      putchar(toupper(s[i]));
                    }
                    else {
                      putchar(s[i]);
                    }
                }
            }
            else {
              printf("%s",s);
            }
        }
    }
    return 0;
}
