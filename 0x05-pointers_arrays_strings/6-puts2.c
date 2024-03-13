#include "main.h"

/**
 * puts2 - prints one character and leaves the other
 * @str: pointer to the first charcter of the string
 */
void puts2(char *str)
{
	int j, i = 0;

	while (str[i])
		i++;
	for (j = 0; j < i; j++)
		if (j % 2 == 0)
			_putchar(str[j]);
	_putchar('\n');
}
