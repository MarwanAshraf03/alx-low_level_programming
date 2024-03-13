#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initialize it with c
 * @size: size of the array
 * @c: character to be initialized with
 *
 * Return: returns NULL if size is 0 and returns pointer to the array if else
 */
char *create_array(unsigned int size, char c)
{
	char *pointer;

	unsigned int i;

	if (size == 0)
		return (NULL);

	pointer	= malloc(size * sizeof(char));

	if (pointer == NULL)
		return (NULL);


	for (i = 0; i < size; i++)
		pointer[i] = c;
	return (pointer);
}
