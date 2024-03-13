#include "main.h"

/**
 * puts_half - prints the latter half of a string
 * @str: pointer to the first character of the string
 */

void puts_half(char *str)
{
	int j, i = 0;

	while (str[i])
		i++;
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
