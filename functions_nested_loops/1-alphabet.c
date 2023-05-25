#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'prints the alphabet'
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
	/*
	 * prints the alphabet to the standard output
	 */
{
	char c;

	for (c = "a"; c <= "z"; c++)
	{
		_putchar(c);
	}
	_putchar("\n");

}
