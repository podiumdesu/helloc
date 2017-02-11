#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int main(void)
{
	int n;

	printf("please input three numbers.");
	scanf("%*d %*d %d", &n);
	printf("the last number is %d", n);
	return 0;
}*/


//把鞋码换成英寸
/*#include<stdio.h>
#define ADJUST 7.31
int main(void)
{
    const double SCALE =0.333;
    double shoe ,foot;

    shoe =9.0;
    foot = SCALE * shoe + ADJUST;
    printf ("shoe size (men's)   foot length\n");
    printf ("%10.1f %15.2f inches \n",shoe ,foot);


    return 0;

}

*/

//计算多个不同鞋码对应的脚长
/*
#include<stdio.h>
#define ADJUST 7.31
int main (void )
{
    const double SCALE = 0.333;
    double shoe,foot ;

    printf("shoe size (men's)        foor length\n");
    shoe=3.0;
    while (shoe <18.5)
    {
        foot = SCALE *shoe +ADJUST ;
        printf("%10.1f %15.2f inches \n",shoe ,foot );
        shoe =shoe + 1.0;
    }
    printf ("if the shoes fits ,wear in \n");
    return 0;
}

*/

#include <stdio.h>
/*
int main (void)
{
    int x ,y;
    x=25;
    ++x;
    y =x*x;
    printf("%d",y);
    return 0;
}*/

#include<stdio.h>
int main(void)
{
    int count ,sum;

    count =0;
    sum=0;
    while (count++<10)
    {
        sum=sum+count;

    }
    printf ("%d",sum);
    return 0;
}







