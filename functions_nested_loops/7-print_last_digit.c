#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Returns the value of a last digit.
 * @digit: the number argument
 * Description: prints the last digit of a number.
 * Return: last_digit
 */
int print_last_digit(int digit)
{
	int last_digit = digit % 10;
	
	if (last_digit < 0)
	{
		last_digit = last_digit * (-1);
		return (last_digit);
	}
	_putchar(last_digit);
	return (last_digit);
}
