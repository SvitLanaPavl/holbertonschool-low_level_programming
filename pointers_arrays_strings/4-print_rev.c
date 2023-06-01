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
	char str_rev[] = strrev(*s);
	size_t len = str_rev;
	int count;

	for (count = len - 1; count <= 0; count--)
	{
	_putchar(s[count]);
	}
	_putchar('\n');
}
