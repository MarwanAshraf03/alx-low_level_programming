#include "main.h"
#include <stdio.h>

/**
 * main - entry point to code
 * @argc: the number of array arguments
 * @argv: array of pointers to arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
