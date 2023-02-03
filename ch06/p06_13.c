#include <stdio.h>
#define ROW 6
#define COL 6

int main()
{
    int i, j;
    int k = 0;
    char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for(i = 0; i < 6; i++)
    {
       for(j = 0; j <= i; j++,k++)
       {
            printf("%c", lets[k]);
       }
       printf("\n");
    }
    return 0;
}