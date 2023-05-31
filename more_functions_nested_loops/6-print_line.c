#include "main.h"
#include <stdio.h>

/**
 * print_line - Draws a straight line in the terminal.
 * Description: prints the character _ n number of times.
 * @n: the number of times to draw the line
 * Return: void
 */

void print_line(int n)
{
	if (n > 0)
	{
		int count;

		for (count = 1; count <= n; count++)
		{
		_putchar(95);
		}
	}
	_putchar('\n');
}
