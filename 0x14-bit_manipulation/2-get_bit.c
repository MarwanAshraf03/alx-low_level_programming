#include "main.h"

/**
 * get_bit - gets bit at given index
 * @n: number to be inspected
 * @index: index to be checked
 *
 * Return: value of bit at index or -1 on error
*/
int get_bit(unsigned long int n, unsigned int index);
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}

