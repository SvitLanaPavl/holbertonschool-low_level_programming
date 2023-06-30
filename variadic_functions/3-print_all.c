#include "variadic_functions.h"
/**
 * print_char - prints character
 * @ap: format arg
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
/**
 * print_int - prints integer
 * @ap: format arg
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 * print_float - prints float
 * @ap: format arg
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 * print_string - prints string
 * @ap: format arg
 */
void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (!s)
	{
	printf("(nil)");
	return;
	}
	printf("%s", s);
}
/**
 * print_all - prints anything
 * Description: prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
print_f elems[] = {
	{"c", print_char},
	{"i", print_int},
	{"f", print_float},
	{"s", print_string},
	{NULL, NULL}
};
int i = 0, j = 0;
char *separator = "";
va_list ap;
va_start(ap, format);

while (format[i] && format)
{
while (elems[j].type)
{
	if (*elems[j].type == format[i])
	{
	printf("%s", separator);
	elems[j].f(ap);
	separator = ", ";
	break;
	}
++j;
}
j = 0;
++i;
}
va_end(ap);
printf("\n");
}
