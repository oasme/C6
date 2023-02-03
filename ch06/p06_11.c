#include <stdio.h>
#define ROW 5
#define COL 5

int main()
{
    int i, j;
    char ch[7] = {'A','B','C','D','E','F'};

    for(i = 0; i <= ROW; i++)
    {
       for(j = COL; j >= COL-i; j--)
       {
            printf("%c", ch[j]);
       }
       printf("\n");
    }
    return 0;
}