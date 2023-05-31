#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Prints the numbers to the standard output.
 * Description: prints the numbers from 0 to 9 to the standard output.
 * Return: void
 */

void print_numbers(void)
{
	int number = 48;

	while (number <= 57)
	{
		_putchar(number);
		number++;
	}
	_putchar('\n');
}
