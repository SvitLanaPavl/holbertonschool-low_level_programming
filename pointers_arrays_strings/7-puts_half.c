#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints the second half of the string
 * Description: Prints the second half of the string
 * @str: the string argument
 * Return: void
 */
void puts_half(char *str)
{
int length = 0;

while (str[length] != '\0')
{
length++;
}
if (length % 2 == 0)
{
	int mid = length / 2;
	int count;

	for (count = mid; count < length; count++)
	{
	_putchar(str[count]);
	}
}
if (length % 2 == 1)
{
	int n = (length - 1) / 2;
	int count_o;

	for (count_o = n - 1; count_o < length; count_o++)
	{
	_putchar(str[count_o]);
	}
}
_putchar('\n');
}
