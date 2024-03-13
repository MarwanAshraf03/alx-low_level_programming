#include "main.h"
#include <stdio.h>

/**
 * main - entry point of code
 * @argc: the number of array arguments
 * @argv: array of pointers to arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
		printf("%s\n", argv[counter]);
	return (0);
}
