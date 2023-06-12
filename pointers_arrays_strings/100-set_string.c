#include "main.h"
#include <stdio.h>

/**
 * set_string - Sets a value of a pointer to a char
 * Description: sets a value of a pointer to a char
 * @s: the string argument
 * @to: to argument
 * Return: void
 */
void set_string(char **s, char *to)
{
*s = to;
}
