#include "variadic_functions.h"
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
