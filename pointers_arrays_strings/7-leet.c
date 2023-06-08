#include "main.h"
/**
 * leet - Encodes a string into digits
 * Description: encodes a string into 1337
 * @str: string argument
 * Return: encoded string
 */

char *leet(char *str)
{
	char *leet_table = "43071";
	int i;

for (i = 0; str[i] != '\0'; i++)
{
	if (strchr("aAeEoOtTlL", str[i]))
	{
str[i] = leet_table[str[i] - 'a'];
	}
}
return (str);
}
