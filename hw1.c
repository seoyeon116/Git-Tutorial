#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;
	int AND, OR, XOR;

	printf("Input two integers: ");
	scanf("%d %d", &num1, &num2);

	AND = num1 & num2;
	OR = num1 | num2;
	XOR = num1 ^ num2;

	printf("%d & %d = %d \n", num1, num2, AND);
	printf("%d | %d = %d \n", num1, num2, OR);
	printf("%d ^ %d = %d \n", num1, num2, XOR);

	return 0;
}