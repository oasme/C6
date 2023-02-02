#include <stdio.h>

int main()
{
    float speed, memory, time;

    printf("Please enter the speed: ");
    scanf("%f", &speed);
    printf("Please enter the memory:");
    scanf("%f", &memory);

    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds",
    speed, memory, memory/speed );
    
    return 0;
}