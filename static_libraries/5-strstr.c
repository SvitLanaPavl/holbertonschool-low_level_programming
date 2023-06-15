#include "main.h"
/**
 * _strstr - Locates a substring
 * Description: locates the first occurence of the substring
 * needle in the string haystack
 * @haystack: string to be searched
 * @needle: occurence to be located
 * Return: a pointer to the begining of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	size_t i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
	j = 0;

	while (haystack[i + j] == needle[j] && needle[j] != '\0')
	{
	j++;
	}

	if (needle[j] == '\0')
	return (&haystack[i]);
	}
return (NULL);
}
