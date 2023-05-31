#include "main.h"
#include <stdio.h>

/**
 * print_square - Prints a square.
 * Description: prints a square with # size number of times.
 * @size: the number of times to print #
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int countH, countV;

		for (countH = 1; countH < size; countH++)
		{
			_putchar(35);
		for (countV = 1; countV < size; countV++)
		{
			_putchar(35);
		}
		_putchar('\n');
		}
	}
}
