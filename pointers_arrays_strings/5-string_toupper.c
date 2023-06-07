#include "main.h"
/**
 * string_toupper - Changes all lowercase letters to uppercase
 * Description: changes all lowercase letters of a string to uppercase
 * Return: uppercase characters
 */
char *string_toupper(char *)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		if(*str >= 'a' && *str <= 'z')
			*str -= 32;
	}
	return (str);
}
