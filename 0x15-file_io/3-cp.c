#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_WRITE "Error: Can't write to %s\n"
#define ERR_READ "Error: Can't read from file %s\n"
#define ERR_CLOSE "Error: Can't close fd %d\n"

/**
 * main - copies content of file to other one
 * @ac: number of arguments passed
 * @av: string array of arguments
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int file_from_d = 0, file_to_d = 0, n;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, USAGE);
		exit(97);
	}
	file_from_d = open(av[1], O_RDONLY);
	if (file_from_d == -1)
	{
		dprintf(STDERR_FILENO, ERR_READ, av[1]);
		exit(98);
	}
	file_to_d = open(av[2], (O_WRONLY | O_TRUNC | O_CREAT), 0664);
	if (file_to_d == -1)
	{
		dprintf(STDERR_FILENO, ERR_WRITE, av[2]);
		exit(99);
	}
	while ((n = read(file_from_d, buffer, 1024)) > 0)
		if (write(file_to_d, buffer, n) < n)
		{
			dprintf(STDERR_FILENO, ERR_WRITE, av[2]);
			exit(99);
		}
	file_from_d = close(file_from_d);
	file_to_d = close(file_to_d);
	if ((file_from_d == -1) | (file_to_d == -1))
	{
		dprintf(STDERR_FILENO, ERR_CLOSE, file_from_d);
		exit(100);
	}
	return (0);
}
