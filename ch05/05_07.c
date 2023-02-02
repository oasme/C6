#include <stdio.h>
void pound(int n);
int main()
{
    int times = 5;

    pound(times);
    
    return 0;
}

void pound(int n)
{
    while(--n > 0)
    {
            printf("#");
    }
    printf("\n");
}