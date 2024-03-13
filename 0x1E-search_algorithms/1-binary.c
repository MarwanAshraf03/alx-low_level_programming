#include "search_algos.h"
/**
 * binary_search - implements the binary search algorithm
 * @array: pointer to the first element in the array
 * @size: number of elemnts in the array
 * @value: value to be found
 * Return: first index of occurunce of value, -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned long int i = size, l = 0, r = size - 1;

	if (!array)
		return (-1);
	while (l <= r)
	{
		print_arr(array, l, r);
		i = ((l + r) / 2);
		if (array[i] < value)
			l = i + 1;
		else
			if (array[i] > value)
				r = i - 1;
		else
			return (i);
	}
	return (-1);
}
/**
 * print_arr - prints an array
 * @array: the array to be printed
 * @start: start of the array to be printed
 * @end: end of the array to be printed
 */
void print_arr(int *array, unsigned long int start, unsigned long int end)
{
	unsigned long int i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[end]);
}
