#include <stdio.h>
int main()
{
    int i, j,index;
    char lets[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char letter;

    printf("Please enter a capital letter: ");
    scanf("%c", &letter);
    for(i = 0; i < 27; i++)
    {
        if(lets[i] == letter)
            index = i + 1;
    }

    for(i = 0; i < index; i++)
    {
       for(j = 1; j < index-i; j++)
       {
            printf(" ");
       }
       for(j = 0; j <= i; j++ )
       {
        printf("%c", lets[j]);
       }
       for(j = i; j > 0; j--)
       {
        printf("%c", lets[j-1]);
       }
       printf("\n");
    }
    return 0;
}