#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @string: a pointer to the first letter in the string
 *
 * Return: returns a pointer to the modified string
 */
char *string_toupper(char *string)
{
	char *temp = string;

	while (*string)
	{
		if (*string >= 'a' && *string <= 'z')
			*string += 'A' - 'a';
		string++;
	}
	return (temp);
}
