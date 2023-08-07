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
    while(*str)
    {
        count++;
        str++;
    }
    return (count);
}
/**
 * create_file - function that creates a file.
 * @filename: name of the file
 * @text_content: the string to be in file
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
    int file_d, n, len = _strlen(text_content);

    if (!filename)
        return (-1);
    file_d = creat(filename, 0600);
    if (file_d == -1)
        return (-1);
    if((n = write(file_d, text_content, len)) < len)
        return (-1);
    close(file_d);
    return (1);
    
}
