#include "main.h"
#include <stdio.h>

/**
 * add - Adds two integers and returns the result.
 * Description: adds two integers and returns the result.
 * @a: First operand
 * @b: Second operand
 * Return: The sum of the two parameters
 */

int add(int a, int b)
{
	int c = a + b;

		if (c > 9)
		{
		int d = _putchar(c / 10 + '0');
		int e = _putchar(c % 10);
		char g = ((d + e) + 0);

		return (g);
		}
		else
		{
		int f = _putchar(c + '0');

		return (f);
		}
}

