#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse recursively
 * @s: pointer to the first character of the string
*/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
