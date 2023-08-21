#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: pointer to the first pointer of the first string
 * @src: pointer to the first pointer of the second string
 *
 * Return: returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = *src;
	return (temp);
}
