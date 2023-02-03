#include <stdio.h>
#include <string.h>

#define SIZE 256
int main()
{
    char a[SIZE], b;   
    int i, j;

    printf("Enter words: ");
    for(i = 0 ; a[i-1] != '\n'; i++)
    {
       scanf("%c",&a[i]);  
    }
    for(j = i-1; j >= 0 ; j--)
    {
        printf("%c", a[j]);
    }
    getchar();
    return 0;
}