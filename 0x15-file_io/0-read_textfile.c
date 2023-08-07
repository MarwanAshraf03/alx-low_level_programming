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
    int file_d, n;
    char buf[1024];
    ssize_t count = 0;

    file_d = open(filename, O_RDONLY);
    if (file_d == -1)
        return;
    while(letters--)
    {
        n = read(file_d, buf, 1);
        if (n == 0)
        {
            count++;
            return (count);
        }
        write(STDOUT_FILENO, buf, 1);
        count++;

    }
    return (count);

    
}
