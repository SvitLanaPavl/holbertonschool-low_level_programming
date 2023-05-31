#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints 10 times the numbers
 * from 0 to 14 to the standard output.
 * Description: prints the numbers from 0 to 14
 * to the standard output 10 times.
 * Return: void
 */
void more_numbers(void)
{
	int number;
	int count;

for (count = 1; count <= 10; count++)
{
	for (number = 1; number <= 14; number++)
	{
		if (number >= 10)
		{
		_putchar('1');
		_putchar(number % 10 + '0');
		}

	}
}
	_putchar('\n');
}

