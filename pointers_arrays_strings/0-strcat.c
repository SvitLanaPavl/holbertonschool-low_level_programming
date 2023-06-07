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
	int i_d = 0; 
	int i_s = 0;

	while (dest[i_d] != '\0')
	{
		i_d++;
	}
	while (src[i_s] != '\0')
	{
	dest[i_d] = src[i_s];
	i_d++;
	i_s++;
	}
	dest[i_d] = '\0';
	return dest;
}
