#include <stdio.h>
#define PI 3.141593

int main()
{
    int number = 7;
    float pies = 12.75;
    int cost = 7800;

    printf("the number is %d, the price is %f \n",number, pies);
    printf(" the value of PI is %f\n", PI);
    printf("%c%d\n", '$' ,2 * cost);

    return 0;

}