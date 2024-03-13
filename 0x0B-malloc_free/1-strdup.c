#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate of
 * the string
 * @str: string to be duplicated
 *
 * Return: returns a pointer to the string duplicated, returns NULL if
 * str == NULL and
 * returns NULL if memory unavailable
 */
char *_strdup(char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	return (ret);
}
