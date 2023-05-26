#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Returns the value of a last digit.
 * @digit: the number argument
 * Description: prints the last digit of a number.
 * Return: Always 0
 */
int print_last_digit(int digit)
{
	int last_digit = digit % 10;

	_putchar(last_digit);
	return (last_digit);
}
