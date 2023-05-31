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
		int count;

		for (count = 1; count <= n; count++)
		{
		_putchar(92);
		_putchar('\n');

		int space;

		for (space = 1; space <= n; space++)
		{
			_putchar(32);
		}
		}
	}
	_putchar('\n');
}

