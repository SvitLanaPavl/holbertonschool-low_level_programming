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
char *_strchr(char *s, char c)
{
	while (*s++)
	{
	if (*s == c)
		return (s);
	}
return (0);
}
char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
		return (NULL);
	while (*s)
	{
	if (_strchr(accept, *s))
	return ((char *)str);
	str++;
	}
}
