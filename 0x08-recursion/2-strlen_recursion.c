#include "main.h"

/**
 * _strlen_recursion - counts the length of a string
 * @s: a pointer to the first character of the string
 *
 * Return: returns the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
