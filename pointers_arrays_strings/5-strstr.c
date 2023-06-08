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
	char *s1 haystack; 
	char *s2 = needle;

	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
		while (*s1 != '\0')
		{
			if (*s1 != *s2)
			break;
		}
		s1++;
		s2++;
		}
	if (*s2 == '\0')
	return (s1);
	
	s1k++;
	}
return (NULL);
}
