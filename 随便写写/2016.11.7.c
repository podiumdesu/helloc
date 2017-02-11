#include<stdio.h>
#include<stdlib.h>

//复合语句程序段
/*int main(void)

{
int index,sam;

index=0;
while (index++<10);
{
    sam =10*index+2;
    printf("sam=%d0",sam);
}
return 0;
}*/


//自动类型转换

/*int main(void)
{
    char ch;
    int i;
    float fl;

    fl= i =ch ='C';
    printf("ch = %c,i =%d,fl = %2.2f\n",ch,i,fl);
    ch =ch+1;
    i=fl+2*ch;
    fl=2.0*ch+i;
    printf("ch =%c,i=%d,fk=%2.2f\n",ch,i,fl);
    ch=1107;
    printf("NOW ch =%c\n",ch);
    ch =80.89;
    printf("NOW ch =%c\n",ch);

    return 0;


}

*/


int main(void)
{
    int a;
    a=sizeof(float);
    printf("a=%zd",a);
    return 0;
}




















