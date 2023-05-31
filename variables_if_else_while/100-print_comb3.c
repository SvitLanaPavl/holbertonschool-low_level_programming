#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: print all combinations of two idigits
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */

int main(void)
	{
	int digit1, digit2;

	for (digit1 = 0; digit1 <= 9; digit1++)
	{
	for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
	{
	putchar(digit1 + '0');
	putchar(digit2 + '0');

	if (digit1 == 8 && digit2 == 9)
	{
		continue;
	}
	putchar(44);
	putchar(32);
	}
	}
putchar(*"\n");
return (0);
}
