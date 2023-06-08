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

	for (i = 0; i <= 8; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			if (j % 2 == 0)
			{
			_putchar(a[i][j]);
			_putchar(' ');
			}
			else
			{
			_putchar(a[i][7 - j]);
			_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
