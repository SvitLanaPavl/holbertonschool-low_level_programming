#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string
 * Description: prints a string folled by a new line to stdout
 * @str: the string argument
 * Return: str
 */

void _puts(char *str)
{
while (*str != '\0')
{
	_putchar(*str + '0');
	str++;
}
_putchar('\n');
}
