#include "variadic_functions.h"
/**
 * print_all - prints anything
 * Description: prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
int i;
char c;
float f;
char *s;
va_list ap;
va_start(ap, format);

while (*format != '\0')
{
	switch (*format)
	{
	case 'c':
		c = va_arg(ap, int);
		printf("%c", c);
		break;
	case 'f':
		f = va_arg(ap, double);
		printf("%f", f);
		break;
	case 'i':
		c = va_arg(ap, int);
		printf("%d", i);
		break;
	case 's':
		s = va_arg(ap, char *);
		if (s == NULL)
		printf("(nil)");

		else
		printf("%s", s);
		break;
	}
}
va_end(ap);
}
