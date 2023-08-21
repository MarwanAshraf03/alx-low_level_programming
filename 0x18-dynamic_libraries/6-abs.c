#include <stdio.h>

/**
 * _abs - returns the absolute value of the number given
 * @a: the integer number to be converted
 *
 * Return: the number in its positive form
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = -1 * a;
	}
	return (a);
}
