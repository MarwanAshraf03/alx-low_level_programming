#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: a pointer to the first character of the string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
