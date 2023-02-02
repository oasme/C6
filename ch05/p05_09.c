#include <stdio.h>
#define M_PER_H 60

int main()
{
    int time =1 ;
    int hour,min;

    printf("Please enter the minutes: ");
   
    while( scanf("%d", &time) && (time > 0))
    { 
       
        hour = time / M_PER_H;
        min = time % M_PER_H;
        printf("%d minutes include %d hour(s) and %dminute(s)\n", time, hour, min);
        printf("Enter next time,(<=0 to quit): ");
    }
    
    return 0;
}