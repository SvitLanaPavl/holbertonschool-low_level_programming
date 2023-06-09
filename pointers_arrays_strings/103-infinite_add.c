#include "main.h"
/**
 * infinite_add - Adds two numbers
 * Description: adds two numbers
 * @n1: number 1
 * @n2: number 2
 * @r: buffer the function will use to store the result
 * @size_r: buffer size
 * Return: pointer to the result, if the result cannot be stored 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, carry, sum, digit1, digit2;

	if (size_r < strlen(n1) + strlen(n2) + 1)
	{
		return (NULL);
	}
	memset(r, 0, size_r);

	carry = 0;

	for (i = 0; i < strlen(n1) || i<strlen(n2); i++)
	{
		digit1 = i < strlen(n1) ? n1[i] - '0' : 0;
		digit2 = i < strlen(n2) ? n2[i] - '0' : 0;
		sum - digit1 + digit2 + carry;
		r[i] = sum % 10 + '0';
	}
	if (carry > 0)
	r[strlen(n1) + strlen(n2)] = carry + '0';

return (r);
}
