//知道当前系统指定的类型大小
#include <stdio.h>
int main()
{
    printf("Type int %zd bytes.\n", sizeof(int));
    printf("Type short %zd bytes.\n", sizeof(short));
    printf("Type char %zd bytes.\n", sizeof(char));
    printf("Type long %zd bytes.\n", sizeof(long));
    printf("Type long long %zd bytes.\n", sizeof(long long));
    printf("Type double %zd bytes.\n", sizeof(double));
    printf("Type long double %zd bytes.\n", sizeof(long double));
    return 0;
}