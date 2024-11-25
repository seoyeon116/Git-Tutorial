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
			str[i] += diff; // 대문자를 소문자로 변환
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= diff; //  소문자를 대문자로 변환
	}
}

int main(void)
{
	char str[100]; // 문자열 저장용 버퍼
	printf("Input> ");
	fgets(str, sizeof(str), stdin); // 문자열 입력 받기


	convCaseStr(str); // 문자열 변환
	printf("Output> %s \n", str);

	return 0;
}