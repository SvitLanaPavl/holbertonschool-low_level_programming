#include "main.h"
#include <stdio.h>

/**
 * _abs - Computes the absolute value of an integer.
 * @n: the number argument
 * Description: computes the absolute value of an integer.
 * Return: Always 0
 */
int _abs(n)
{
	if (n < 0)
	{
	n = (-1) * n;
	}
	_putchar(n);
	return (0);
}
