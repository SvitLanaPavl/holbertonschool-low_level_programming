#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all digit numbers base 10
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
}
putchar(*"\n");
return (0);
}
