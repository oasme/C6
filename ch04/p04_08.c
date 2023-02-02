#include <stdio.h>

int main()
{
    char name[20];
    float height;

    printf("Please enter your name: ");
    scanf("%s", name);
    printf("Please enter your height (cm):");
    scanf("%f", &height);

    printf("%s, you are %.2f m(s) tall", name, height/100);

    return 0;
}