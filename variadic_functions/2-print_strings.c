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

	if (!string)
	printf("(nil)");

	else
	printf("%s", string);

	if (i < n - 1 && separator)
	printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
