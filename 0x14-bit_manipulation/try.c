#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    unsigned long int n;
    n = 0;
    printf("%ld\n", sizeof(n));
    n = 98;
    printf("%ld\n", sizeof(n));
    n = 1024;
    printf("%ld\n", sizeof(n));
}