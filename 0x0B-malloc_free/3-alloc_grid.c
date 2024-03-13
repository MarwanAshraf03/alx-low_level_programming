#include "main.h"
#include <stdlib.h>


/**
 * alloc_grid - allocates a two dimensional array
 * @width: the table width
 * @height: the table height
 *
 * Return: pointer to the table
 */
int **alloc_grid(int width, int height)
{
	int **rows, **pointer;

	if (width <= 0 || height <= 0)
		return (NULL);
	pointer = rows = malloc(sizeof(int *) * height);
	if (!rows)
		return (NULL);
	while (height--)
	{
		int *cols = malloc(sizeof(int) * width);
		int counter = width;

		if (!cols)
		{
			counter = 0;
			while (pointer + counter != rows)
				free(pointer[counter++]);
			free(pointer);
			return (NULL);
		}
		while (counter--)
			*cols++ = 0;
		*rows++ = cols - width;
	}
	return (pointer);
}
