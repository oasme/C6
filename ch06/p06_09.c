#include <stdio.h>
#define SIZE 26 
#define CH 'a'
int main()
{
    char array[SIZE];
    int i;

    for(i = 0; i < SIZE; i++)
    {
        array[i] = CH + i;
    }
    for(i = 0; i < SIZE; i++)
    {
        printf("%c ", array[i]);
    }

    return 0;
}