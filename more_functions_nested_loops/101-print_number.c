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
	int temp;

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

	temp = n;

	while (temp)
	{
	int digit = temp % 10;

	_putchar(digit + '0');
	temp /= 10;
	}
}
