#include "main.h"
/**
 * _strcmp - Compares two strings
 * Description: compares two strings
 * @s1: string 1 argument
 * @s2: string 2 argument
 * Return: 0 if the strings are equal, less than
 * 0 - the first string is less than the second one, greater than 0
 * the first string is greater than the second one
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
{
	if (*s1 == '\0' || *s2 == '\0')
		break;

	s1++;
	s2++;
}

if (*s1 == '\0' && *s2 == '\0')
return (0);
else
return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
