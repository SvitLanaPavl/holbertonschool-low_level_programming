#include "main.h"
/**
 * leet - Encodes a string into digits
 * Description: encodes a string into 1337
 * @str: string argument
 * Return: encoded string
 */

char *leet(char *str)
{
	char array[] = "aAeEoOtTlL";
	char leet_table[] = "4433007711";
	int i, x;

for (i = 0; str[i] != '\0'; i++)
{
	for (x = 0; x < 10; x++)
	{
	if (str[i] == array[x])
		str[i] = leet_table[x];
	}
}
return (str);
}
