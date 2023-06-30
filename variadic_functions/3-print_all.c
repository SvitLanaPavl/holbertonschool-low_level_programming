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

while (format[counter] != '\0')
{
	switch (format[counter])
	{
	case 'c':
		c = va_arg(ap, int);
		printf("%c, ", c);
		break;
	case 'f':
		f = va_arg(ap, double);
		printf("%f, ", f);
		break;
	case 'i':
		i = va_arg(ap, int);
		printf("%d, ", i);
		break;
	case 's':
		s = va_arg(ap, char *);
		if (s == NULL)
		{
		printf("(nil)");
		return;
		}
		printf("%s, ", s);
		break;
	}
++counter;
}
if (!format || format[counter] == '\0')
{
printf("\n");
return;
}
va_end(ap);
printf("\n");
}
