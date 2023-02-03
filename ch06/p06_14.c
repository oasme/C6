#include <stdio.h>

int main()
{
    int i;
    int n1, n2;

    printf("Please enter the first integer: ");
    scanf("%d", &n1);
    printf("Please enter the second integer: ");
    scanf("%d", &n2);
    printf("  n   square  cubic  \n");
    for(i = n1; i <= n2; i++)
    {
        printf("%3d %7d %6d\n", i, i * i, i * i *i );
    }

    return 0;
}
