#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the alphabet in lowercase,
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch == 'q' || ch == 'e')
	{
	continue;
	}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
