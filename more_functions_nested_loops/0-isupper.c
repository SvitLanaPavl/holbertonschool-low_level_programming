#include "main.h"
#include <stdio.h>

/**
 * _isupper - Checks for uppercase character character.
 * @c: the letter argument
 * Description: prints the uppercase alphabet to the standard output.
 * Return: 1 if c is uppercase. 0 otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
return (0);
}
