#include "main.h"
#include <stdio.h>

/**
 * _islower - Checks for lowercase character.
 * @c: the letter argument
 * Description: prints the lowercase alphabet to the standard output.
 * Return: 1 if c is lowercase. 0 otherwise
 */
int _islower(int c)
{
for (c = 65; c < 123; c++)
{
	if (c > 64 && c < 91)
	{
		return (0);
	}
	if (c > 97; c < 123)
	{
		return (1);
	}
	else
	{
		continue;
	}
}
return (0);
}