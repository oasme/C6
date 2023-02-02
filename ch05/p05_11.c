#include <stdio.h>
#define D_PER_W 7

int main()
{
    int num;
    int week,day;

    printf("Please enter the day(s): ");
    scanf("%d", &num);
    week = num / D_PER_W;
    day = num % D_PER_W;
    printf("%d days include %d week(s) and %d day(s)\n", num, week, day);    
    
    return 0;
}