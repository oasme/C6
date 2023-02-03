#include <stdio.h>

int main()
{
    float n1, n2;

    printf("Please enter two float numbers: ");
    while(scanf("%f %f", &n1, &n2) == 2)
    {
        printf("num1 %f num2 %f, (num1 - num2)/( num1 * num2) = %f\n",
        n1, n2, (n1-n2) / (n1*n2));
        printf("Please enter two float numbers(q to quit): ");
    }
    printf("Done");

    return 0;
}