#include "main.h"

/**
 * _isdigit - checks if character is a digit
 * @s: the character to be checked
 *
 * Return: 1 if s is digit and 0 else
 */
int _isdigit(char s)
{
	return (s >= '0' && s <= '9');
}

/**
 * _atoi - a function that converts string to integer
 * @s: the string to be checked
 *
 * Return: integer value of the string
 */
int _atoi(char *s)
{
	int counter = 0, neg = 0, digit;
	int number = 0;

	while (s[counter])
	{
		if (s[counter] == '-')
		{
			neg++;
		}
		else if (_isdigit(s[counter]))
		{
			while (_isdigit(s[counter]))
			{
				digit = (s[counter] - '0');
				digit = neg % 2 ? -digit : digit;
				number = number * 10 + digit;
				counter++;
			}
			break;
		}
		counter++;
	}
	return (number);
}
