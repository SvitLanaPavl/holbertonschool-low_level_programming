#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * Description: prints all natural numbers from n to 98 followed by a new line.
 * @n: number pass to a function.
 * Return: Always 0.
 */

void print_to_98(int n)
{
for (i = n; n <= 98; n++)
{
	_putchar(n + '0');
	_putchar(44);
	_putchar(32);
}
return (0);
}

