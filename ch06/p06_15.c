#include <stdio.h>
#include <string.h>
#define SIZE 40

int main()
{
    char a[SIZE];
    int length,i;

    printf("Please enter a word: ");
    scanf("%s", a);
    length = strlen(a);
    for(i = length-1; i>=0 ; i--)
    {
        printf("%c", a[i]);
    }

    return 0;
}