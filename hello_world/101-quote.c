#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 1
 */
int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t size = strlen(quote);
	size_t count = 1;

	fwrite(quote, size, count, stderr);
	return (1);
}
