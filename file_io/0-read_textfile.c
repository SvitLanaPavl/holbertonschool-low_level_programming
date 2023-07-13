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
char *buffer = malloc(sizeof(char) * letters);
ssize_t bytes_read;
ssize_t bytes_written;

if (!filename || !ptr)
{
free(buffer);
return (0);
}

bytes_read = fread(buffer, 1, letters, ptr);
if (bytes_read < 0)
{
free(buffer);
return (0);
}

buffer[bytes_read] = '\0';
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written < bytes_read)
{
free(buffer);
return (0);
}

fclose(ptr);
return (bytes_read);
}
