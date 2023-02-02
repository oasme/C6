#include <stdio.h>
#define PAGES 956
int main()
{
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);

    printf("%x %X %#x", 55, 55, 55);
    printf("**%d**% d**% d**\n",42, 42, -42);
    printf("**%4d**%4.3d**%04d**%04.3d**\n", 6, 6, 6, 6);
    return 0;
}