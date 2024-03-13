#include <stdio.h>
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: always void
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
}
