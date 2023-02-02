#include <stdio.h>
// your weight in platinum
//注意数据类型和占位符
int main()
{
    float weight;
    float value;

    printf("Are you worth your weight in platinum?\n");
    printf("Let us check it out.\n");
    printf("Please enter your wight in pounds:");

    scanf("%f", &weight);
    getchar();
    value = 1700.00 * weight *14.583;
    printf("Your weight in platinum is worth $%.2f \n",value);
    printf("You are easily worth that!If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");

    return 0; 
}