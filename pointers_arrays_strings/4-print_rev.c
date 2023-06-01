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
	void my_strlen(s)
	{
	size_t length = 0;

	while (s != 0)
	{
		length++;
		s++;
	}
	}
	size_t len = my_strlen(*s);
	int count;

	for (count = len - 1; count <= 0; count--)
	{
	_putchar(s[count]);
	}
	_putchar('\n');
}
