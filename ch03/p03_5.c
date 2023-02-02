#include <stdio.h>
#define SEC 3.156e7 
int main()
{
    double age = 0.0;

    printf("Please enter your age ");
    scanf("%lf", &age);
    printf("Your age = %e seconds", age * SEC);

    return 0;
}