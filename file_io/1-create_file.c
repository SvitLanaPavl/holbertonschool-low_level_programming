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

if (!text_content)
text_content = "";

file_ptr = fopen(*filename, O_CREAT | O_RDWR | O_TRUNC | 0600);
if (!file_ptr)
return (-1);

if (text_content)
fwrite(text_content, 1, strlen(text_content), file_ptr);

fclose(file_ptr);
return (1);
}
