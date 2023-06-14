#include "main.h"
/**
 * root_helper - processing the root
 * Description: testing the root
 * @n: number argument
 * @square: square root argument
 * Return: natural square root of a number, otehrwise -1
 */
int root_helper(int n, int square)
{
	if ((square * square) == n)
	return (square);

	if (square == n / 2)
	return (-1);

	return (root_helper(n, square + 1));
}
/**
 * _sqrt_recursion - Returns the natuaral square root of a number
 * Description: returns the natural square root of a number
 * @n: number argument
 * Return: natural square root of a number, otherwise -1
*/
int _sqrt_recursion(int n)
{
	int square = 0;

	if (n < 0)
	return (-1);

	if (n == 1)
	return (1);

	return (root_helper(n, square));
}
