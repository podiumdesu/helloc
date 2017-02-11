#include<stdio.h>


#define AREA 350
int main(void)
{
	int sy_square;
	int n_buckets;
	int square;

	printf("Please enter the area:\n");

	while ((scanf("%d", &square)) == 1)
	{
		n_buckets = square / AREA;
		if (square % AREA != 0)
			n_buckets += 1;
		printf("you need %d buckets", n_buckets);
		printf("enter next value (q to quit):\n");

	}
	return 0;

}
