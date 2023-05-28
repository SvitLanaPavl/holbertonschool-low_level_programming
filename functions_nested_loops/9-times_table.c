#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table starting with 0.
 * Description: should print 9 times table.
 * Return: Always 0
 */

void times_table(void)
{
	char a;
	char b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
		_putchar(b * a);
		_putchar(44);
		_putchar(32);
		}
	_putchar('\n');
	}

}
