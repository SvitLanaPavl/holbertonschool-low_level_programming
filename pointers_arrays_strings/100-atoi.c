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
int count;

for (count = 0; s[count] != '\0'; count++)
{
if (s[count] == '-')
{
sign = -1;
}
else if (s[count] == '+')
{
sign = 1;
}
else if (s[count] >= '0' && s[count] <= '9')
{
	value = value * 10 + s[count] - '0';
}
else
{
return (0);
}
}
return (value * sign);
}
