#include "main.h"

/**
 * strlength - returns the length of a string
 * @str: the string whose length to check
 *
 * Return: integer length of string
 */
int strlength(char *str)
{
	int i = 0;

	if (!str)
		return (0);

	while (*str++)
		i++;
	return (i);
}

/**
 * create_file - a function that creates a file.
 * @filename: name of file to be created
 * @text_content: text to be written
 *
 * Return: 1 on success 0 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_pointer;
	ssize_t bytes = 0, len = strlength(text_content);

	if (!filename)
		return (-1);
	file_pointer = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
			S_IWUSR);
	if (file_pointer == -1)
		return (-1);
	if (len)
		bytes = write(file_pointer, text_content, len);
	close(file_pointer);
	return (bytes == len ? 1 : -1);
}
