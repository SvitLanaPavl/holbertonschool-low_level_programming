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
int count, i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
{
count++;
}
else if (s[i] >= '0' && s[i] <= '9')
{
	value = value * 10 + s[i] - '0';
}
}
if (count % 2 == 1)
{
	sign = -1;
}
return (value * sign);

else
{
	return (0);
}
}
