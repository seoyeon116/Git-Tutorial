#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // pow, sqrt �Լ� ��� ����

// ǥ������ ��� �Լ�
double standard_deviation(double arr[], int count)
{
    int i;
    double sum = 0.0, gap_sum = 0.0;
    double mean, variance;

    // ���
    for (i = 0; i < count; i++) 
    {
        sum += arr[i];
    }
    mean = sum / count;

    // ��հ��� ���̸� �����ϰ� �װ͵��� ��
    for (i = 0; i < count; i++) 
    {
        gap_sum += pow(arr[i] - mean, 2);  // pow �Լ��� ����
    }

    // �л�
    variance = gap_sum / count;

    // ǥ������ (�л��� ������)
    return sqrt(variance);
}

int main(void)
{
    double arr[5];
    double result;
    int count = 5;
    int i;

    printf("Enter 5 real numbers: ");
    for (i = 0; i < count; i++) 
    {
        scanf("%lf", &arr[i]);
    }

    result = standard_deviation(arr, count);

    printf("Standard Deviation = %.3f \n", result);

    return 0;
}