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
	int index_s, index_d;

	for (index_d = 0; dest[index_d] != '\0'; index_d++)
	{
	for (index_s = 0; src[index_s] != '\0'; index_s++)
	{
	dest[index_d + index_s] = src[index_s];
	}
	}
	return (dest);
}
