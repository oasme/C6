#include <stdio.h>
#define SIZE 8

int power(int x, int exp);

int main()
{
    int a[8];
    int i,j;

    for(i = 0; i < 8; i++)
    {
        a[i] = power(2, i);
    }
    j = 0;
    do{
        printf("%d ",a[j]);
        j++;
    }while( (j >= 0) && (j < 8));

    printf("Done!");
    return 0;
}

int power(int x, int exp)
{
    int i = 1;
    int pow = 1;

    for(i = 1; i <= exp; i++)
    {
        pow = pow * x ;
    }
    return pow;

}