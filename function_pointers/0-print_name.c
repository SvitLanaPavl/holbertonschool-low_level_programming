#include "function_pointers.h"
/**
 * print_name - Prints a name
 * Desription: function prints name
 * @name: pointer to a string - name to be printed
 * @f: pointer to a function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
size_t i;
char *chr;

for (i = 0; i < strlen(name); i++)
{
chr = &name[i];
f(chr);
_putchar(*chr);
}
_putchar(' ');
}
