#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to be allocated
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (!p)
		exit(98);
	return (p);
}
