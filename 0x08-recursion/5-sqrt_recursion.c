#include "main.h"

/**
 * check_root_availability - needs the extra parameter r to work
 * @n: the natural number whose root to find
 * @r: the root iterator
 *
 * Return: the natural root of n or -1 if not found
 */
int check_root_availability(int n, int r)
{
	if (r * r == n)
		return (r);
	else if (r * r > n)
		return (-1);
	return (check_root_availability(n, r + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be rooted
 *
 * Return: returns square root of n and returns -1 when n has no root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (check_root_availability(n, 0));
}
