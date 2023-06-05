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
	unsigned int digit = 0;
	int flag = 0;

	if (n < 0)
	{
	_putchar('-');
	n = -n;
	flag = 1;
	_putchar(n + '0');
	}
	else if (n == 0)
	{
	_putchar('0');
	}

	while (n > 0)
	{
	flag = 1;
	digit = digit * 10 + n;;
	_putchar(digit + '0');
	n /= 10;
	}
}
