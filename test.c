#include <stdio.h>
int main (void) {
	int a,b,c;
	printf("please enter three numbers");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	int w;
	w = c >((a>b)?a:b)?c:((a>b)?a:b);
	printf("%d",w);
	return 0 ;
}
