#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse
 * Description: prints a string in reverse
 * @s: string argument
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return (0);
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
