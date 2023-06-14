#include "main.h"
/**
 * is_prime_number - Checks for prime number
 * Description: returns 1 if the integer is prime number
 * @n: number argument
 * Return: 1 if prime number, otherwise 0
 */
int is_prime_number(int n)
{
	int c = 2;

	if (n <= 1)
	return (0);
	
	if (n % c == 0)
	{
	is_prime_number(n - 1);
	return (1);
	}
	return (0);
}
