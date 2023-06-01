#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - Reverses a string
 * Description: Function that reverses a string
 * @s: the string argument
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int a;
	int z;

	while (s[length] != '\0')
	{
		length++;
	}

	if (length == 0)
	{
	return;
	}

	for (a = 0, z = length - 1; a < z; a++, z--)
	{
	int temporary = s[a];

	s[a] = s[z];
	s[z] = temporary;
	}
}
