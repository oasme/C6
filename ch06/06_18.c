#include <stdio.h>

int main()
{
    int i;
    int a[8];

    printf("Please enter 8 integer numbers: ");
    for(i = 0; i < 8; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 8 - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}