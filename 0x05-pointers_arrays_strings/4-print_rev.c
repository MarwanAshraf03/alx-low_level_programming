#include "main.h"

/**
 * print_rev - prints a string in reversed order
 * @s: the pointer of the first charcter in the array
 */
void print_rev(char *s)
{
	int counter = 0;

	while (s[counter])
	{
		counter++;
	}
	while (--counter >= 0)
	{
		_putchar(s[counter]);
	}
	_putchar('\n');
}

