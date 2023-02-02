//使用错的转换说明会有意想不到的结果
#include <stdio.h>
int main()
{
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;
    char ch = 'a';
    float aboat = 32220.0;

    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n", big, big);
    printf("verybig = %lld and not %ld\n", verybig, verybig);
    printf("%c is %d\n",ch , ch);
    printf("%f can be written %e\n", aboat, aboat);
    
    return 0;
}