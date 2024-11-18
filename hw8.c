#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // pow, sqrt 함수 사용 위해

// 표준편차 계산 함수
double standard_deviation(double arr[], int count)
{
    int i;
    double sum = 0.0, gap_sum = 0.0;
    double mean, variance;

    // 평균
    for (i = 0; i < count; i++) 
    {
        sum += arr[i];
    }
    mean = sum / count;

    // 평균과의 차이를 제곱하고 그것들의 합
    for (i = 0; i < count; i++) 
    {
        gap_sum += pow(arr[i] - mean, 2);  // pow 함수로 제곱
    }

    // 분산
    variance = gap_sum / count;

    // 표준편차 (분산의 제곱근)
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