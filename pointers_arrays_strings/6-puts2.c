#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - Prints every other character
 * Description: Prints every other character of a string
 * @str: the string argument
 * Return: void
 */
void puts2(char *str)
{
int length = 0;

while (str[length] != '\0')
{
if (length == 0)
{
_putchar(str[length]);
}
else if (length % 2 == 0)
{
_putchar(str[length]);
}
length++;
}
_putchar('\n');
}
