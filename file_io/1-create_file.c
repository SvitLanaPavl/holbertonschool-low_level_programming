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
int file_descr;

if (!text_content)
text_content = "";

file_descr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (file_descr < 0)
return (-1);

if (text_content)
write(file_descr, text_content, strlen(text_content));

close(file_descr);
return (1);
}
