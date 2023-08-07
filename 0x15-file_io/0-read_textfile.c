#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: the file name to be read
 * @letters: number of letters it should read and print
 * 
 * Return: actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
    int file_d;
    char buf[1024 * 8];
    ssize_t count = 0;

    if (!filename || !letters)
		return (count);
    file_d = open(filename, O_RDONLY);
    if (file_d == -1)
        return (count);
    count = read(file_d, buf, letters);
    count = write(STDOUT_FILENO, buf, count);
    close(file_d);
    return (count);

    
}
