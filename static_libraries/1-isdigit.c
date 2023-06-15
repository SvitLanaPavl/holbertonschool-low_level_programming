#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks for a digit.
 * @c: the digit argument
 * Description: prints the digits to the standard output.
 * Return: 1 if c is digit. 0 otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
return (0);
}
