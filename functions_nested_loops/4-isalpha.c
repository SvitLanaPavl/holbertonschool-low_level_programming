#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Checks for alphabetic character.
 * @c: the letter argument
 * Description: checks for alphabetic characters.
 * Return: 1 if c letter. 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
return (0);
}
