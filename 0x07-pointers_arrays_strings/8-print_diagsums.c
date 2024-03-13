#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the two diagonal sums of a square matrix
 * @a: 2d int array representing square matrix
 * @size: the size*size of square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int counter, firstSum = 0, secondSum = 0;

	for (counter = 0; counter < size; counter++)
	{
		firstSum += *(a + size * counter + counter);
		secondSum += *(a + size * (counter + 1) - counter - 1);
	}
	printf("%d, %d\n", firstSum, secondSum);
}
