#include "main.h"
/**
 * _puts_recursion - Prints a string
 * Description: prints a string folled by a new line
 * @s: string argument
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
