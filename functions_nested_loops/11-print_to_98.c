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

scanf("%d", &n);

while (n >= 98)
{

	printf("%d, ", n);
	n--;
}

while (n < 98)
{
printf("%d, ", n);
n++;
}
if (n == 98)
{
	printf("%d", n);
}
}

