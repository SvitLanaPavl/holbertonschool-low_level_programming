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
void print_all(const char * const format, ...) {
print_f elems[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string},
{NULL, NULL}
  };
unsigned int i = 0;
char *separator = "";
va_list ap;
va_start(ap, format);

if (format[i]) {
print_all(format + 1, ap);
switch (format[i]) {
case 'c':
printf("%s", separator);
elems[0].f(ap);
separator = ", ";
break;
case 'i':
printf("%s", separator);
elems[1].f(ap);
separator = ", ";
break;
case 'f':
printf("%s", separator);
elems[2].f(ap);
separator = ", ";
break;
case 's':
printf("%s", separator);
elems[3].f(ap);
separator = ", ";
break;
    }
  }
  va_end(ap);
  printf("\n");
}
