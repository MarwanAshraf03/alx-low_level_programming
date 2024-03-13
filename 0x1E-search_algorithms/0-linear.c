#include "search_algos.h"
/**
 * linear_search - implements the linear search algorithm
 * @array: pointer to the first element in the array
 * @size: number of elemnts in the array
 * @value: value to be found
 * Return: first index of occurunce of value, -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned long int i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
