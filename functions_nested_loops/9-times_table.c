#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table starting with 0.
 * Description: should print 9 times table.
 * Return: Always 0
 */

void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
		int c = b * a;

		if (c <= 9 && b < 9 && b != 0)
		{
		_putchar(32);
		_putchar(c + '0');
		_putchar(44);
		}

		if (c <= 9 && b == 9)
		{
			_putchar(32);
			_putchar(c + '0');
		}

		if (c > 9 && b < 9 && b != 0)
		{
			_putchar(32);
			_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
			_putchar(44);
		}
		if (c > 9 && b == 9)
		{
			_putchar(32);
			_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
		}

			_putchar(c + '0');
			_putchar(44);
		}
	_putchar('\n');
	}

}
