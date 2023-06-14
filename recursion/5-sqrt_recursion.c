#include "main.h"
/**
 * _sqrt_recursion - Returns the natuaral square root of a number
 * Description: returns the natural square root of a number
 * @n: number argument
 * Return: natural square root of a number
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
	return (0);

	int guess = x / 2;
	return (square_root_averg(x, guess));

	int square_root_averg(int x, int guess)
	{
	int next_guess = (guess + x / guess) / 2;

	if (fabs(guess - next_guess) < 1e-10)
		return (guess);

	return (square_root_averg(x, next_guess));
	}
}
