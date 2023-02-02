#include <stdio.h>

void cubic_d( double n);

int main()
{
    double num;
    printf("Please enter a double number: ");
    scanf("%lf", &num);
   cubic_d(num);

    return 0;
}

void cubic_d( double n)
{
    printf("%lf", n*n*n);
    
}