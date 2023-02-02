#include <stdio.h>

int main()
{
    int number;

    printf("Please enter a ASCII code value:(0~127)");
    scanf("%d", &number);
    printf("%c",number);

    return 0;
}