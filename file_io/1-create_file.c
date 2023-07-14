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
size_t bytes_written;

if (!text_content)
text_content = "";

file_ptr = fopen(filename, "w");
if (!file_ptr)
return (-1);

bytes_written = fwrite(text_content, 1, strlen(text_content), file_ptr);
if (!bytes_written)
return (-1);

fclose(file_ptr);
return (1);
}
