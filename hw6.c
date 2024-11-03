#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int numbers[5];
    int odd[5], even[5];
    int odd_count = 0, even_count = 0;
    int i;

    printf("Please input five integers: ");
    for (i = 0; i < 5; i++) 
    {
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 == 0) 
        {
            even[even_count] = numbers[i];
            even_count++;
        }
        else 
        {
            odd[odd_count] = numbers[i];
            odd_count++;
        }
    }

    printf("\n");

    printf("Odd numbers: ");
    for (i = 0; i < odd_count; i++) 
    {
        printf("%d ", odd[i]);
    }

    printf("\n");

    printf("Even numbers: ");
    for (i = 0; i < even_count; i++) 
    {
        printf("%d ", even[i]);
    }

    printf("\n");
    return 0;
}