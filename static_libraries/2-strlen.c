#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of the string
 * Description: returns the length of the string
 * @s: the character argument
 * Return: length
 */

int _strlen(char *s)
{
	size_t length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
