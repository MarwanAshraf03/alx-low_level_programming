#include "main.h"

/**
 * print_chessboard - prints an 8x8 chessboard
 * @a: 2d char array representing board
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int counter1, counter2;

	for (counter1 = 0; counter1 < 8; counter1++)
	{
		for (counter2 = 0; counter2 < 8; counter2++)
		{
			_putchar((*(a + counter1))[counter2]);
		}
		_putchar('\n');
	}
}
