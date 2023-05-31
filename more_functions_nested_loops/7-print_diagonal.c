#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Draws a diagonal line in the terminal.
 * Description: prints the character \ n number of times.
 * @n: the number of times to draw the line
 * Return: void
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int count, space;

		for (count = 1; count <= n; count++)
		{
			if (count == 1)
			{
				_putchar(92);
				_putchar('\n');
			}
			if (count > 0)
			{
				for (space = 0; space < count; space++)
				{
					_putchar(32);
				}
		_putchar(92);
		_putchar('\n');
		}
	}
	_putchar('\n');
}

