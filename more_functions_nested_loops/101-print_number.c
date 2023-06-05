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

	if (n < 0)
	{
	_putchar('-');
	flag = 1;
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
	if (flag == 1)
	{
		break;
	}
	}
}
