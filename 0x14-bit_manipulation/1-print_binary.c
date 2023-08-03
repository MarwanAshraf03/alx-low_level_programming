#include "main.h"
#include <stdio.h>

/**
 * 
*/
void print_binary(unsigned long int n)
{
    unsigned long int two = 2;
    int power = 0, i, j;
    char *str = "";

    while (n > 0)
    {
        for (i = power; i > 0; str--,i--);
        while (two < n)
        {
            two = two << 1;
            power++;
        }
        *str = '1';
        power--;
        while (power)
        {
            *str = '0';
            power--;
        }
    }
}