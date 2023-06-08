#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * Description: locates the first occurence in the string s
 * of any of the bytes in the string accept
 * @s: string to be searched
 * @accept: occurence of the bytes in
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp;

	if ((s == NULL) || (accept == NULL))
		return (NULL);
	while (*s != '\0')
	{
	temp = accept;
	while (*temp != '\0')
	{
		if (*s == *temp)
		{
			return (s);
		}
		temp++;
	}
	s++;
	}
return (NULL);
}
