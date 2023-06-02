#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _atoi - Converts a string to an integer
 * Description: Convert a string to an integer
 * @s: string argument
 * Return: number if the string has numbers,
 * otherwise 0
 */
int _atoi(char *s)
{
int sign = 1;
int value = 0;
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
{
sign = -1;
i++;

if (i % 2 == 0)
{
	sign = 1;
}
}
else if (s[i] >= '0' && s[i] <= '9')
{
	value = value * 10 + s[i] - '0';
}
else
{
	return (0);
}
}
return (value * sign);
}
