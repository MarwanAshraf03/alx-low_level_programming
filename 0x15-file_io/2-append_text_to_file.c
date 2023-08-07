#include "main.h"
/**
 * _strlen - gets length of a string
 * @str: string to be processed
 * Return: The length of a string
*/
int _strlen(char *str)
{
	int count;

	if (!str)
		return (0);
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: string to be added to the file
 * Return: 1 on success, -1 of failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d = -1, n, len = _strlen(text_content);

	if (!filename)
		return (-1);
	file_d = open(filename, (O_APPEND | O_WRONLY));
	if (file_d == -1)
		return (-1);
	n = write(file_d, text_content, len);
	if (n < len)
		return (-1);
	close(file_d);
	return (1);
}
