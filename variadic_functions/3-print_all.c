#include "variadic_functions.h"
/**
 * print_all - prints anything
 * Description: prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
int i, counter;
char c;
float f;
char *s;
char *separator = ", ";
va_list ap;
va_start(ap, format);
if (!format)
{
printf("\n");
return;
}
while (format[counter] != '\0')
{
	switch (format[counter])
	{
	case 'c':
		c = va_arg(ap, int);
		printf("%c%s", c, separator);
		break;
	case 'f':
		f = va_arg(ap, double);
		printf("%f%s", f, separator);
		break;
	case 'i':
		i = va_arg(ap, int);
		printf("%d%s", i, separator);
		break;
	case 's':
		s = va_arg(ap, char *);
		if (s == NULL)
		{
		printf("(nil)");
		return;
		}
		printf("%s%s", s, separator);
		break;
	}
++counter;
}
va_end(ap);
printf("\n");
}
