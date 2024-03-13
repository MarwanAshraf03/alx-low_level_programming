#include "main.h"

/**
 * reverse_array - a function that reverses array
 * @a: pointer to first element of array
 * @n: number of elements of array
 */
void reverse_array(int *a, int n)
{
	int counter, temp;

	for (counter = 0; counter < n / 2; counter++)
	{
		temp = *(a + counter);
		*(a + counter) = *(a + n - counter - 1);
		*(a + n - counter - 1) = temp;
	}
}
