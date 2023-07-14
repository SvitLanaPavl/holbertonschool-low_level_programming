#include "main.h"
/**
 * create_file - creates file
 * Description: creates file
 * @filename: name of the file to create
 * @text_content: null terminated string to write to the file
 * Return: 1 on success, -1 on failure (file cannot be read, file cannot
 * be written, write fails, if filename is null.
 */
int create_file(const char *filename, char *text_content)
{
FILE *file_ptr;

if (!filename)
return (-1);

file_ptr = fopen(filename, "rw");

if (!file_ptr)
return (-1);

if (!text_content)
file_ptr = fputs("", strlen(text_content), text_content);

fclose(file_ptr);
return (1);
}
