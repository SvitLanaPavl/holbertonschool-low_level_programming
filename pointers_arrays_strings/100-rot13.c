#include "main.h"
/**
 * rot13 - Encodes a string using rot 13
 * Description: encodes a string using rot 13
 * @str: string argument
 * Return: encoded string
 */
char *rot13(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
	if (str[i] >= 'a' && str[i] < 'n')
		str[i] += 13;
	
	else (str[i] >= 'n' && str[i] <= 'z')
		str[i] -= 13;
}
return (str);
}
