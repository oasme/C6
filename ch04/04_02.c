#include <stdio.h>
#define PRAISE "You are an extraordinary being."

int main()
{
    char name[40];

    printf("What is your name? ");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof(name));
    printf("The phase of praise has %zd letters ",strlen(PRAISE));
    printf("and occupies %zd memory cells.\n", sizeof(PRAISE));

    return 0;
}