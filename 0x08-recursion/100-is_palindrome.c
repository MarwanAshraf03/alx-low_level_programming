#include "main.h"
#include <stdio.h>

/**
 * _strlen - returs length of string
 * @s: pointer to the first character of the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	if (*s)
		return (1 + _strlen(s + 1));
	else
		return (0);
}

/**
 * do_is_palindrome - recursive palindrome check
 * @s: the string to check
 * @l: length of the string
 * @i: the string iterator
 *
 * Return: 1 if true, 0 if false
 */
int do_is_palindrome(char *s, int l, int i)
{
	if (i >= l / 2)
		return (1);
	if (*(s + i) == *(s + l - i - 1))
		return (do_is_palindrome(s, l, i + 1));
	return (0);
}

/**
 * is_palindrome - determines if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if true, 0 if false
 */
int is_palindrome(char *s)
{
	int l = _strlen(s);

	return (do_is_palindrome(s, l, 0));
}
