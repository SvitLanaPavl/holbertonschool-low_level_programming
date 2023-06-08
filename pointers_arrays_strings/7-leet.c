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
	char leet_table[] = "4433007711\0";
	int i;

for (i = 0; str[i] != '\0'; i++)
{
	if (str[i] == array[i])
		str[i] = leet_table[i];
}
return (str);
}
