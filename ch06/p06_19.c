#include <stdio.h>
#define SIZE 8

int main()
{
    double a[SIZE], b[SIZE];
    double sum = 0.0;
    int i,j;

    printf("Enter 8 double numbers: ");
    for(i = 0; i < SIZE; i++)
    {
        scanf("%lf", &a[i]);
        sum = sum +a[i];
        b[i] = sum;
    }
    for(j = 0; j < SIZE; j++)
    {
        printf("%10lf ", a[j]);
    }
    printf("\n");
    for(j = 0; j < SIZE; j++)
    {
        printf("%10lf ", b[j]);
    }
    printf("\n");

    return 0;
}