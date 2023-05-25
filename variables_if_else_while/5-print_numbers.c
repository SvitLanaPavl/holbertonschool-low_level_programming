#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all digit numbers base 10
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */

int main(void)
{
	int digit;
for (digit = 0; digit < 10; digit++)
{
printf("%d", digit);
}
printf("\n");
return (0);
}
