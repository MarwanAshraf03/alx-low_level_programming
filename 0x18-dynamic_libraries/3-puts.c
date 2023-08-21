#include "main.h"

/**
 * _puts - prints a string on the screen
 * @str: a pointer to the first character of the string
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
