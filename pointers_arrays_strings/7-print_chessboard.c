#include "main.h"
/**
 * print_chessboard - Prints the chessboard
 * Description: prints the chessboard
 * @a: pointer to a 2D array of characters
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	size_t i, j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
		_putchar(a[i][j]);
		}
	_putchar('\n');
	}
}
