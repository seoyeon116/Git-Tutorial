#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j, k;
	for (i = 1; i <= 5; i++) // Çà °¹¼ö
	{
		for (j = 0; j < 5 - i; j++) // °ø¹é °¹¼ö
		{
			printf(" ");
		}

		for (k = 0; k < 2 * i - 1; k++) //  º° °¹¼ö
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}