#include <stdio.h>

int main()
{
    int count;
    double time, power_of_2;
    int limit;

    printf("Please enter the number of terms you want: ");
    scanf("%d", &limit);
    for (time = 0, power_of_2 = 1, count = 1; count < limit;
        count++, power_of_2 *= 2.0)
        {
            time += 1.0 / power_of_2;
            printf("time = %f when terms = %d.\n", time ,count);
        }

    return 0;
}