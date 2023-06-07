#include "main.h"
/**
 * _strncpy - Copy a string
 * Description: copy the string like a library function
 * @dest: the destination string argument
 * @src: the source string argument
 * @n: the bytes argument
 * Return: a pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
