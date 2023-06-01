#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers
 * Description: swaps he values of two integers
 * @a: first integer value
 * @b: second integer value
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int med = *a;
	*a = *b;
	*b = med;
}
