#include "main.h"

/**
 * rev_string - reverses strings
 * @s: pointer to the first character in string
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char c;

	for (j = 0; s[j]; j++)
		i++;

	for (j = 0; j < i / 2; j++)
	{
		c = s[i - j - 1];
		s[i - j - 1] = s[j];
		s[j] = c;
	}
}
