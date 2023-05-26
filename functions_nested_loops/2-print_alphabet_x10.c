#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Prints the alphabet to the standard output 10 times.
 * Description: prints the lowercase alphabet to the standard output.
 * Return: void
 */
void print_alphabet_x10(void)
{
	int count = 1;

	while (count <= 1)
	{
	int letter = 97;

	while (letter <= 122)
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	count++;
	}
}
