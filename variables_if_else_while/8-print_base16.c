#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all the numbers of base 16 in lowercase
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */

int main(void)
{
int digit;
int cha;
for (digit = 48; digit < 58; digit++)
{
	putchar(digit);
}
for (cha = 97; cha < 103; cha++)
{
	putchar(cha);
}
putchar(*"\n");
return (0);
}
