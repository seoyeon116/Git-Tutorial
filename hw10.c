#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0;
}

void ClearLineFromReadBuffer(void)
{
	while (getchar() != '\n');
}

typedef struct cityinfo
{
	char name[20];
	char country[20];
	int population;
} CityInfo;


int main(void)
{
	CityInfo arr[3];
	int i;

	printf("Input three cities: \n");

	for (i = 0; i < 3; i++)
	{
		printf("Name> ");
		fgets(arr[i].name, sizeof(arr[i].name), stdin);
		RemoveBSN(arr[i].name);
		printf("Country> ");
		fgets(arr[i].country, sizeof(arr[i].country), stdin);
		RemoveBSN(arr[i].country);
		printf("Population> ");
		scanf("%d", &arr[i].population);
		ClearLineFromReadBuffer();
	}

	printf("\n");
	printf("Printing the three cities: \n");

	for (i = 0; i < 3; i++)
	{
		printf("%d. %s in %s with a population of %d people \n", i + 1, arr[i].name, arr[i].country, arr[i].population);
	}

	return 0;
}