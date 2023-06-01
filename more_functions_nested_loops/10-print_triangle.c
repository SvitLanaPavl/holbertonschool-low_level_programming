#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Prints a triangle.
 * Description: prints a triangle with # size number of times.
 * @size: the number of times to print #
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int count, countSp, countH;

		for (count = 0; count < size; count++)
		{
		for (countSp = 0; countSp < size - count - 1; countSp++)
		{
		_putchar(32);
		}
		for (countH = 0; countH <= count; countH++)
		{
		_putchar(35);
		}
		_putchar('\n');
		}
	}
}
