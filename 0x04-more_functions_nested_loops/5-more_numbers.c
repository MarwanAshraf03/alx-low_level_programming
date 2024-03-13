#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 for 10 times
 */
void more_numbers(void)
{
	int j, i;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i / 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}

}
