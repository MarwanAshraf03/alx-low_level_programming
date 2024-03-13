#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenaste two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int length1 = 0, length2 = 0;
	char *pointer;

	while (s1 && *s1++)
		length1++;
	while (s2 && *s2++)
		length2++;
	pointer = malloc(sizeof(char) * (length1 + length2 + 1));
	if (!pointer)
		return (NULL);
	pointer += length1 + length2;
	*pointer = '\0';
	for (s2--; length2--;)
		*--pointer = *--s2;
	for (s1--; length1--;)
		*--pointer = *--s1;
	return (pointer);
}
