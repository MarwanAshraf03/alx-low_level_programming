#include "main.h"

/**
 * factorial - a fuction that calculates the factorial of n
 * @n: the number to be calculated the factorial for
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	else
		return (1);
}
