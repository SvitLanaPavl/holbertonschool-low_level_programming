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
	char *s1; 
	char *s2;

	s2 = needle;

	if (*s2 == 0)
	return (haystack);

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		continue;

		s1 = haystack;
		while (1)
		{
			if (*s2 == 0)
			return (haystack);
		if (*s1++ != *s2++)
		break;
		}
		s2 = needle;
	}
return (NULL);
}
