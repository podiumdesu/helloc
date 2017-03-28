#include<stdio.h>

int main (void){
	int a;
	printf("please enter a number\n");
	scanf("%d",&a);
	int w;
	w = (a%3==0 && a%5==0 && a%10 != 0)?1:0;
	printf("%d",w);
	return 0;
}
