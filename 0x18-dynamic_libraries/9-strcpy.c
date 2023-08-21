#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies string into another one
 * @dest: the container to be copied in
 * @src: the container to be copied from
 *
 * Return: returns a pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
