#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: the first string
 * @src: the second string to be concatenated to the first string
 * @n: the number of characters to be concatenated
 *
 * Return: returns pointer to the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*src && n)
	{
		*dest++ = *src++;
		n--;
	}
	while (n--)
		*dest++ = '\0';
	return (temp);
}
