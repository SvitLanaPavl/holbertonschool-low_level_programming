#include "main.h"
/**
 * _strcat - Concatenates two strings
 * Description: appends source string to destination string
 * overwriting the terminating null byte at te destination string
 * @dest: the destination string argument
 * @src: the source string argument
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (*dest);
}
