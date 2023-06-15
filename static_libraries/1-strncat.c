#include "main.h"
/**
 * _strncat - Concatenates two strings
 * Description: appends source string to destination string
 * overwriting the terminating null byte at te destination string
 * @dest: the destination string argument
 * @src: the source string argument
 * @n: bytes to be used from src
 * Return: a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i_d = 0;
	int i_s = 0;

	while (dest[i_d] != '\0')
	{
		i_d++;
	}
	for (; i_s < n && src[i_s] != 0; i_s++, i_d++)
	{
		dest[i_d] = src[i_s];
	}
	dest[i_d] = '\0';
	return (dest);
}
