#include <stdio.h>

int main()
{
    long num;
    long sum = 0L;

    printf("Please enter an integer to be summed(q to quit)");
    while(scanf("%ld", &num) == 1)
    {
        sum += num;
        printf("Please enter next integer (q to quit): ");
    }
    printf("Those integers sum to %ld.\n", sum);
    return 0;

}