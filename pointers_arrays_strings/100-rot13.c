#include "main.h"
/**
 * rot13 - Encodes a string using rot 13
 * Description: encodes a string using rot 13
 * @str: string argument
 * Return: encoded string
 */
char *rot13(char *str)
{
int i, holder, chr;

for (i = 0; i < strlen(str); i++)
{
	holder = str[i];
	holder += 13;

	if (holder > 90)
	{
		holder = holder - 90 + 64;
		chr = holder;
		str[i] = chr;
	}
	else
	{
		chr = holder;
		str[i] = chr;
}
return (str);
}
