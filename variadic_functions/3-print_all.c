#include "variadic_functions.h"
/**
 * print_all - prints all args
 * @format: format arg
 * Return: void
 */
void print_all(const char * const format, ...)
{
unsigned int flag, i = 0;
char *string;
va_list ap;

while (format)
{
va_start(ap, format);
while (format[i]) {
flag = 1;
switch (format[i]) {
case 'c':
printf("%c", va_arg(ap, int));
break;
case 'i':
printf("%d", va_arg(ap, int));
break;
case 'f':
printf("%f", va_arg(ap, double));
break;
case 's':
string = va_arg(ap, char *);
if (!string)
	string = "(nil)";
printf("%s", string);
break;
default:
flag = 0;
break;
}
if (format[i + 1] && flag)
	printf(", ");
i++;
}
va_end(ap);
break;
}
printf("\n");
}
