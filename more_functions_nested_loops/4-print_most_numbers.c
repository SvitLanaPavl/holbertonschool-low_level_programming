#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Prints the numbers to the standard output.
 * Description: prints the numbers from 0 to 9 to the standard output.
 * Does not print 2 and 4.
 * Return: void
 */

void print_most_numbers(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		if (number != 50 && number != 52)
		{
		_putchar(number);
		}
	}
	_putchar('\n');
}
