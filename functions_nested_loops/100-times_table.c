#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table starting with 0.
 * Description: if prints the n times table.
 * @n: the operand
 * Return: Always 0
 */

void print_times_table(int n)
{
	int a;
	int b;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			int c = b * a;

			if (c > 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}

			else
			{
				if (b != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(32);
				}
				_putchar(c + '0');
			}

			if (c > 99)
			{
				int d = c % 10;
				int f = c / 10;
				int g = f % 10;
				int h = g / 10;

				_putchar(32);
				_putchar(h + '0');
				_putchar(g + '0');
				_putchar(d + '0');
			}

			if (n > 15 || n < 0)
			{
				printf("%c", '\0');
			}
		}
	_putchar('\n');
}
}
