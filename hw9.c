#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int convCaseStr(char str[])
{
	int i;
	const int diff = 'a' - 'A';
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += diff; // �빮�ڸ� �ҹ��ڷ� ��ȯ
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= diff; //  �ҹ��ڸ� �빮�ڷ� ��ȯ
	}
}

int main(void)
{
	char str[100]; // ���ڿ� ����� ����
	printf("Input> ");
	fgets(str, sizeof(str), stdin); // ���ڿ� �Է� �ޱ�


	convCaseStr(str); // ���ڿ� ��ȯ
	printf("Output> %s \n", str);

	return 0;
}