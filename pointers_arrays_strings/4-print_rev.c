#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Prints a string in reverse
 * Description: prints a string in reverse
 * @s: the string argument
 * Return: void
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (length = length - 1; length > 0; length--)
	{
	_putchar(s[length]);
	}
	_putchar('\n');
}
