#include <stdio.h>

int main()
{
    int num,i;

    printf("Please enter an interger: ");
    scanf("%d", &num);
    for( i = num; i <= num + 10; i++)
    {
      printf("%d ",i);
    }
    return 0;

}