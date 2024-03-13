#include "main.h"

/**
 * print_binary - prints a number as a binary string number
 * @n: the number to be printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int Bit = sizeof(n) * 8, printed = 0;

	while (Bit)
	{
		if (n & 1L << --Bit)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
