#include "main.h"
/**
 * string_toupper - Changes all lowercase letters to uppercase
 * Description: changes all lowercase letters of a string to uppercase
 * Return: uppercase characters
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
