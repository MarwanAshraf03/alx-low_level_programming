#include "main.h"

/**
 * _strlen - counts the string length
 * @s: pointer to the first element in the string
 *
 * Return: returns the count of the string
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*s++ != '\0')
	{
		counter++;
	}
	return (counter);
}
