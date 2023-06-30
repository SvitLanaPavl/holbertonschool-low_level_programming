#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * Description: prints strings
 * @n: number of stringss passed to the function
 * @separator: string to be printed between numbers
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
	string = va_arg(ap, char *);

	if (separator == NULL)
	separator = "";

	if (i == n - 1)
	printf("%s", string);

	if (string == NULL)
	printf("nil");

	else
	printf("%s%s", string, separator);
	}
	printf("\n");
	va_end(ap);
}
