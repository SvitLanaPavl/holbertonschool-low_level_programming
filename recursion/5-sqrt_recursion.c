#include "main.h"
/**
 * _sqrt_recursion - Returns the natuaral square root of a number
 * Description: returns the natural square root of a number
 * @n: number argument
 * Return: natural square root of a number
*/
int _sqrt_recursion(int n)
{
	int guess, next_guess;

	if (n == 0)
	return (0);

	guess = n / 2;
	int next_guess = (guess + n / guess) / 2;
	int difference = guess - next_guess;

	if (difference < 1e-10)
	return (guess);

	return (_sqrt_recursion((n / guess + guess) / 2));
}
