#include "main.h"

/**
 * _memset - fills memory of n size with b
 * @s: pointer to the memory place
 * @b: the constant byte
 * @n: size of memory to be filled
 *
 * Return: pointer to the memory place
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
		*(s + n) = b;
	return (s);
}
