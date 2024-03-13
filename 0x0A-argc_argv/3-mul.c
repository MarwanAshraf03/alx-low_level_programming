#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of code
 * @argc: the number of array arguments
 * @argv: array of pointers to arguments
 *
 * Return: returns 0 on success, 1 on fail
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
