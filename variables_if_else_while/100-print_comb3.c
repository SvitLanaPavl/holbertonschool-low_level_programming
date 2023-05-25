#include <stdlib.h>
#include <time.h>
#include <stdio.h>

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

	digit1 = 48;
while (digit1 < 58)
{
	digit2 = 48;

	while (digit2 < 58)
	{
	putchar(digit1);
	putchar(digit2);
	digit2++;
	putchar(44);
	putchar(32);
	}
digit1++;
}
putchar(*"\n");
return (0);
}
