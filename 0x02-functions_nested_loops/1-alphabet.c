#include "stdio.h"

/**
 * print_alphabet - prints characters from a to z
 *
 * Return: Always void.
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
}
