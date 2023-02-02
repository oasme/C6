#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    int biggest_int = INT_MAX;
    float biggest_flt = FLT_MAX;

    printf("biggest_int = %d, biggest_int + 1 = %d ", INT_MAX, INT_MAX + 1);
    printf("biggest_float = %e, biggest_float * 100.0 = %e ", FLT_MAX, FLT_MAX * 100.0f);

    return 0;
}