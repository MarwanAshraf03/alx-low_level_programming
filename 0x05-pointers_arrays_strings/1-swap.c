#include "main.h"

/**
 * swap_int - swaps values of two variables
 * @a: first variable
 * @b: second variable
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
