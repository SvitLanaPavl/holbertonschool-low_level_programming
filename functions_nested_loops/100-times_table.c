#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table starting with 0.
 * Description: if prints the n times table.
 * @n: the operand
 * Return: Always 0
 */

void print_times_table(int n)
{
	static int a;
	int b;

	scanf("%d", &n);

	for (b = 0; b <= 14; b++)
	{
		printf("%d, ", b * a);

	printf("\n");
	if (n > 15 || n < 0)
	{
	printf("%c", '\0');
	}
}
}
