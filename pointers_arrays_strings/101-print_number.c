#include "main.h"
/**
 * print_number - Prints an integer
 * Description: Prints an integer
 * @n: number argument
 * Return: void
 */
void print_number(int n)
{
	int digit = 0;
	int flag = 0;
	int i;

	if (n == 0)
	_putchar('0');

	if ((n > 0 && n <= 2147483647) || (n < 0 && n >= -2147483647))
	{
	if (n < 0)
	n = -n, _putchar('-');
	for (i = 1000000000; i > 0; i = i / 10)
	{
	digit = n / i;
	if (digit != 0)
	flag = 1;

	if (digit != 0 || flag == 1)
	_putchar (digit + '0'), n = n - (n / i) * i;
	}
	}
	else if (n < -2147483647)
	{
	_putchar(45), _putchar(50), _putchar(49), _putchar(52), _putchar(55);
	_putchar(52), _putchar(56), _putchar(51), _putchar(54), _putchar(52);
	_putchar(56);
	}
}
