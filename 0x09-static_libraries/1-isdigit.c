#include <stdio.h>
#include "main.h"

/**
 * _isdigit - detects if the input is digit or not
 * @c: the input required to test
 *
 * Return: returns 1 if c is digit and 0 if else
 */

int _isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
