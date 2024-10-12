#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void BinaryNum(int num)
{
	if (num == 0)
		return;
	BinaryNum(num / 2);
	printf("%d", num % 2);
}

int main(void)
{
	int num;

	printf("Please enter a number: ");
	scanf("%d", &num);
	BinaryNum(num);
	printf("\n");

	return 0;
}