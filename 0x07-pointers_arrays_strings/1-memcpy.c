#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: pointer to destination buffer
 * @src: pointer to source buffer
 * @n: number of bytes to copy
 *
 * Return: pointer to destination address
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		*(dest + n) = *(src + n);
	}
	return (dest);
}
