#include "main.h"
/**
 * binary_to_uint - converts a binary to an insigned int
 * Description: converts a binary number to an insigned int
 * @b: pointer to str of 0 and 1 chars
 * Return: converted number, or 0, if there is one or more
 * chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int mul = 1;
unsigned int value = 0;
int t;
unsigned int len;

len = strlen(b);

for (t = len-1; t >= 0; t--)
{
if (b[t] != '0' && b[t] != '1')
return (0);

if (b[t] == '1')
{
value += mul;
}
mul *= 2;
}
return (value);
}
