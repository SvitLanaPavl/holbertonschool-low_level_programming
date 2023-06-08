#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * Description: locates the first occurence in the string s
 * of any of the bytes in the string accept
 * @s: string to be searched
 * @b: occurence of the bytes in
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
		return (NULL);
	
	*char temp;

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
}
