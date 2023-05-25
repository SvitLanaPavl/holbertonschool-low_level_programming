#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all combinations of single digits
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */

int main(void)
{
	int digit;
for (digit = 48; digit < 58; digit++)
{
putchar(digit);
if (digit < 57)
{
	putchar(44);
	putchar(32);
}
}
putchar(*"\n");
return (0);
}
