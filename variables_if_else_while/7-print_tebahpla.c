#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet letters in reverse
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */

int main(void)
{
	char letter = 'z';
while (letter >= 'a')
{
	putchar(letter);
	letter--;
}
putchar(*"\n");
return (0);
}
