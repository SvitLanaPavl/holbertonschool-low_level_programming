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
unsigned int value = 0;
int i = 0;

if (b == NULL)
return (0);

while (*b)
{
while (b[i] == '0' || b[i] == '1')
{
if (b[i] != '0' || b[i] != '1')
{
break;
return (0);
}

value <<= 1;
value += b[i] - '0';
i++;
}
}
return (value);
}
