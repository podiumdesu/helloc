//
//#include<stdio.h>
//#include<ctype.h>
//
//#define false 0
//#define true 1
//
////#include<stdbool.h>
//#define STOP '|'
//int main(void)
//{
//	char c;
//	char prev;
//	long n_chars = 0L;
//	int n_lines = 0;
//	int n_words = 0;
//	int p_lines = 0;
//	bool inword = false;
//	printf("Enter text to be analyzed (| to terminate):\n");
//	prev = '\n';
//	while ((c = getchar()) != STOP)
//	{
//		n_chars++;
//		if (c == '\n')
//			n_lines++;
//		if (!isspace(c) && !inword)
//		{
//			inword = true;
//			n_words++;
//		}
//		if (isspace(c) && inword)
//			inword = false;
//		prev = c;
//	}
//	if (prev != '\n')
//		p_lines = 1;
//	printf("characters = %ld,words =%d,lindes =%d", n_chars, n_words, n_lines);
//	printf("partial lines + %d\n", p_lines);
//	getchar();
//	getchar();
//	return 0;
//	
//}


//给我弟写一个小学数学题吧
//假设一桶油漆最多能涂350平方米，当你输入一个数时，请算出一共需要多少桶油漆

#include<stdio.h>
#define AREA 350
int main(void)
{
	int sy_square;
	int n_buckets;
	int square;
	
	printf("Please enter the area:\n");

	while ((scanf(%d), &square) == 1)
		n_buckets = square / AREA;
	if (square % AREA != 0)
		n_buckets += 1;
	else
		break;
	printf("you need %d buckets", n_buckets);
	return 0;


}
