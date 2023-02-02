#include<stdio.h>

int main()
{
    float num;

    printf("Please enter a float number:\n");
    scanf("%f", &num);
    printf("a.%.1f and %.1e\n",num, num);
    printf("b.% .3f and %.3E\n", num, num);

    return 0;
}