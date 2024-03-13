#include <stdio.h>

/**
 * _abs - returns the absolute value of integer
 * @n: the integer to value absolutely
 *
 * Return: a positive integer or zero
 */
int _abs(int n)
{
	return (n > 0 ? n : -n);
}

/**
 * print_last_digit - prints the last digit of an integer
 * @n: the number which we need to get the last time of
 *
 * Return: returns the last digit of n
 */

int print_last_digit(int n)
{
	int d = _abs(n % 10);

	putchar(d + '0');
	return (d);
}
