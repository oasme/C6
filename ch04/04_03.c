#include <stdio.h>
#define PI 3.14159
int main()
{
    float area, circum, radius;

    printf("What is the radius of your pizza?\n");
    scanf("%f", &radius);
    circum = 2.0 * PI * radius;
    area = PI * radius * radius;
    printf("Your basic pizza perameters are as follows:\n");
    printf("circumference = %.2f, area = %.2f\n", circum,area);
    

    return 0;
}