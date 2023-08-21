#include <stdio.h>
/**
 * _islower - decides if a character is lowerCase or upperCase
 * @c: the character to test its case
 *
 * Return: returns 1 if it is lowercase and 0 otherwise
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
