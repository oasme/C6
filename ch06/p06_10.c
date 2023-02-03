#include <stdio.h>
#define ROW 5
#define COL 5

int main()
{
    int i,j;

    for(i = 0; i < ROW; i++)
    {
        for( j = COL-i; j <= COL; j++ )
        {
            printf("$");
        }
        printf("\n");
    }
    return 0;

}