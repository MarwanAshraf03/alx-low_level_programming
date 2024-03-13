#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str = "_putchar\n";

	while (*str != '\0')
	{
		putchar(*str++);
	}
	return (0);
}
