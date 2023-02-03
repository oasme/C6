#include <stdio.h>

int main()
{
    float height_cm, height_m;
    printf("Please enter your height: ");

    while( scanf("%f", &height_cm)  && (height_cm > 0))
    { 
        printf("%.2f cm = %.2fm \n", height_cm, height_m);
        printf("Enter next value,(<=0 to quit): ");
    }
    printf("bye");
    return 0;
}