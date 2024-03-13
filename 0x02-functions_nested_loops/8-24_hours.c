#include <stdio.h>

/**
 * jack_bauer - prints every minutes of every hour of the day
 *
 * Returns: void
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			putchar(h / 10 + '0');
			putchar(h % 10 + '0');
			putchar(':');
			putchar(m / 10 + '0');
			putchar(m % 10 + '0');
			putchar('\n');
		}
	}
}
