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
	int digit = 0;
	int flag = 0;

	if (n == 0)
	{
	_putchar('0');
	}

	if ((n > 0 && n <= 2147483647) || (n < 0 && n >= -2147483648))
	{
	if (n < 0)
	{
	n = -n, _putchar('-');
	}
	for (i = 1000000000; i > 0; i / 10)
	{
	digit = n / i;
	if (digit != 0)
	{
	flag = 1;
	}

	if (digit != 0 || flag != 1)
	{
	_putchar (digit + '0');
	n = n - (n / i) * i;
	}
	}
	}
}
