#include <stdio.h>

/**
 * print_to_98 - prints numbers from n to 98
 * @n: number needed to start from
 *
 * Return: returns void always
 */
void print_to_98(int n)
{
	int d = 0;

	if (n > 98)
		d = -1;
	else if (n < 98)
		d = 1;

	while (n != 98)
	{
		printf("%d, ", n);
		n += d;
	}
	printf("%d\n", n);
}

