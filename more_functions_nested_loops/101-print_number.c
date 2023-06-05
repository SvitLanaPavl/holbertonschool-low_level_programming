#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 * Description: prints an integer.
 * @n: number argument
 * Return: void
 */
void print_number(int n)
{
	int digit;

	if (n < 0)
	{
	_putchar('-');
	n = -n;
	_putchar(n + '0');
	}
	else if (n == 0)
	{
	_putchar('0');
	}

	while (n > 0)
	{
	digit = n % 10;

	_putchar(digit + '0');
	n /= 10;
	}
}
