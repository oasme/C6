//测试转义字符400
#include <stdio.h>
int main()
{
    float salary;

    printf("\aEnter your monthly salary:");
    printf("$_______\b\b\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year", salary, salary * 12.0);
    printf("\rGee!\n");
    return 0;
}