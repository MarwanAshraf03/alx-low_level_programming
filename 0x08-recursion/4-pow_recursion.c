#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the base number
 * @y: the power number
 *
 * Return: returns x to the power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
