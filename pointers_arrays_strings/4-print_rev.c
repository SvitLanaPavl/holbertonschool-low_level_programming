#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * Description: prints a string in reverse
 * @s: the string argument
 * Return: void
 */

void print_rev(char *s)
{
	int length = strlen(s);
	int count;

	for (count = length - 1; count <= 0; count--)
	{
	_putchar(s[count]);
	}
	_putchar('\n');
}
