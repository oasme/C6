//把2音寻转化为英寸
#include <stdio.h>

int main()
{
    int feet,fathoms;

    fathoms = 2;
    feet = 6 * fathoms;
    printf("There are %d feet in %d fathoms!\n",feet, fathoms);
    printf("Yes, I said %d feet!\n", feet);

    return 0;

}