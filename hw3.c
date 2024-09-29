#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j, k;
	for (i = 1; i <= 5; i++)
	{
		for (j = 0; j < 5 - i; j++)
		{
			printf(" ");
		}

		for (k = 0; k < 2 * i - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}