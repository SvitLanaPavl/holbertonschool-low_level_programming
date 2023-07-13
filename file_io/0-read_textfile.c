#include "main.h"
/**
 * read_textfile - reads a textfile and prints it the POSIX
 * Description: reads a textfile and prints it the POSIX
 * @filename: filename
 * @letters: number of letters it should read and print
 * Return: 0 if the file cannot be opened and print, 0 if
 * the file is NULL, 0 if write fails or does not write the
 * expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *ptr = fopen(filename, "r");
char buffer[letters];
ssize_t bytes_read = fread(buffer, 1, letters, ptr);
ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

if (!filename || !ptr)
return (0);

if (bytes_written < bytes_read)
return (0);

fclose(ptr);
return (bytes_read);
}
