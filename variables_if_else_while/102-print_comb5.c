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
	int digit1, digit2, digit3, digit4;

	for (digit1 = 0; digit1 <= 9; digit1++)
	{
	for (digit2 = 0; digit2 <= 9; digit2++)
	{
		for (digit3 = 0; digit3 <= 9; digit3++)
		{
			for (digit4 = digit2 + 1; digit4 <= 8; digit4++)
			{
				putchar(digit1 + '0');
				putchar(digit2 + '0');
				putchar(32);
				putchar(digit3 + '0');
				putchar(digit4 + '0');

	if (digit1 == 9 && digit2 == 8 && digit3 == 9 && digit4 == 9)
	{
		continue;
	}
	putchar(44);
	putchar(32);
	}
	}
	}
	}
putchar(*"\n");
return (0);
}
