#include "main.h"
#include <stdio.h>

/**
 * print_sign - Prints the sign of a number.
 * @n: the number argument
 * Description: checks the numbers.
 * Return: 1 if n is greater than zero. 0 if n is zero. -1 less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('43')
	return (1);
	}

	if (n < 0)
	{
	_putchar('45');
	return (-1);
	}

	if (n == 0)
	{
	_putchar('48');
	}
	return (0);
}
