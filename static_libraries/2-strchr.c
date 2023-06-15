#include "main.h"
/**
 * _strchr - Locates a character in a string
 * Description: Locates a character in a string
 * @s: string argument
 * @c: character argument
 * Return: pointer to the first occurence of character c in a string s
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
