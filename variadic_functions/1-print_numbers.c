#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * Description: prints numbers
 * @n: number of integers passed to the function
 * @separator: string to be printed between numbers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, number;
	va_list ap;

	va_start(ap, n);
	if (!separator)
	return;

	for (i = 0; i < n; i++)
	{
	number = va_arg(ap, int);
	if (i == n - 1)
	{
	printf("%d", number);
	}
	else
	printf("%d%s", number, separator);
	}
	printf("\n");
	va_end(ap);
}
