#include "main.h"

/**
 * binary_to_uint - converts a binary number
 * @b: string to be converted
 *
 * Return: the decimal value of b
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int re = 0;
	unsigned int inc = 1;
	int counter = 0, i;

	if (!b)
		return (0);
	while (*b)
	{
		if ((*b != '0') & (*b != '1'))
			return (0);
		counter++;
		b++;
	}
	for (i = counter; i >= 0; i--, b--)
		;
	for (i = counter; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			re = re + inc;
			inc *= 2;
			continue;
		}
		inc *= 2;
	}
	return (re);
}
