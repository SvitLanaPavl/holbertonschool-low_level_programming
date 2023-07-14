#include "main.h"
/**
 * append_text_to_file - appends text at the end of the file
 * Description: appends text at the end of the file
 * @filename: name of the file to create
 * @text_content: null terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file_descr;
int bytes;

if (!filename)
return (-1);

file_descr = open(filename, O_RDWR O_APPEND);
if (file_descr < 0)
return (-1);

if (!text_content)
{
close(file_descr);
return (1);
}

bytes = write(file_descr, text_content, strlen(text_content));
if (bytes < 0)
{
close(file_descr);
return (-1);
}

close(file_descr);
return (1);
}
