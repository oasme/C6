#include <stdio.h>
#define INCH 2.54 
int main()
{
    double height;

    printf("Please enter your height(inch) ");
    scanf("%lf", &height);
    printf("Your height = %.2lf cm", height * INCH);

    return 0;
}