#include "main.h"

/**
 * _strncat - a funtion to concatenate a string dest with n of string src
 * @dest: a pointer to the first character of string one
 * @src: a pointer to the first character of string two
 * @n: the number of characters to be concatanated
 *
 * Return: returns a pointer to the full string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*dest)
		dest++;
	while (*src && n--)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}
