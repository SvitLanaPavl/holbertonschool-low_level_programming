#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - Prints elements of the array
 * Description: Prints n number of elements
 * @a: array argument
 * @n: number argument
 * Return: void
 */
void print_array(int *a, int n)
{
int count;

for (count = 0; count < n; count++)
{
	if (count > 0)
	{
	printf(", ");
	}
printf("%d", a[count]);
}
printf("\n");
}
