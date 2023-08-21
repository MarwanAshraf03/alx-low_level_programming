#include <stdio.h>
/**
 * _isalpha - fuction which checks if the input is letter or not
 * @c: is the letter to check
 *
 * Return: returns 1 if c is letter and 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
