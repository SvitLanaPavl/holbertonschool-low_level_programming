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

		for (count = 1; count <= size; count++)
		{
		for (countSp = 1; countSp < size; countSp++)
		{
		_putchar(32);
		}
		for (countH = 1; countH < size - 1; countH++)
		{
		_putchar(35);
		}
		_putchar('\n');
		}
	}
}
