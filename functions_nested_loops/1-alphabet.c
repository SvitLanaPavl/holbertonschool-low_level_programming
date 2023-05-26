#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Prints the alphabet to the standard output.
 * Description: prints the lowercase alphabet to the standard output.
 * Return: void
 */

void print_alphabet(void)
{
	int letter;

	letter = 97;

	while (letter <= 122)
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
