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
	if (n < 0)
	{
	_putchar('-');
	_putchar(n + '0');
	n = -n;
	}
	else if (n == 0)
	{
	_putchar('0');
	}

	while (n > 0)
	{
	_putchar(n % 10 + '0');
	n /= 10;
	}
}
