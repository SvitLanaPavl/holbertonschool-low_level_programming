#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all combinations of two two digit
 * numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
	{
	int digit1, digit2;

for (digit1 = 0; digit1 <= 99; digit1++)
{
for (digit2 = digit1 + 1; digit2 <= 99; digit2++)
{
	putchar(digit1 / 10 + '0');
	putchar(digit1 % 10 + '0');
	putchar(32);
	putchar(digit2 / 10 + '0');
	putchar(digit2 % 10 + '0');

	if (digit1 == 98 && digit2 == 99)
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
