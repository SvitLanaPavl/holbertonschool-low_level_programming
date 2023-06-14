#include "main.h"
/**
 * factorial - Returns factorial of a given number
 * Description: returns factorial of a given number
 * @n: number argument
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);

	else if (n == 0)
	return (1);

	else
	{
	n = n * factorial(n - 1);
	return (n);
	}
}
