#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a' - 1; c < 'z'; c++)
	{
		putchar(c + 1);
	}
	putchar('\n');
	return (0);
}
