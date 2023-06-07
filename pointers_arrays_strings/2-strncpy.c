#include "main.h"
/**
 * _strncpy - Copy a string
 * Description: copy the string like a library function
 * @dest: the destination string argument
 * @src: the source string argument
 * @n: the bytes argument
 * Return: a pointer to the resulting string
 */

char *strncpy(char *dest, char *strc, int n)
{
	int i;
	int i_d = 0;
	int i_s = 0;

	while (dest[i_d] != '\0')
	{
		i_d++;
	}
	for (i = 0; i < n && src[i_s] != 0; i++)
	{
		dest[i_d] = src[i_s];
		i_d++;
		i_s++;
	}
	dest[i_d] = '\0';
	return (dest);
}
