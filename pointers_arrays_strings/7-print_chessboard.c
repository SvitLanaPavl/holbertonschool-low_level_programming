#include "main.h"
/**
 * _print_chessboard - Prints the chessboard
 * Description: prints the chessboard
 * @a: pointer to a 2D array of characters
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j, c = 219, b = 255;

	for (i = 1; i <= 8; i++)
	{
		for (j = 1; j <= a; j++)
		{
			if ((i+j) % 2 == 0)
			_putchar(c + '0'), _putchar(c + '0');
			
			else
			_putchar(b + '0'), _putchar(b +'0');
		}
	_putchar('\n');
	}
}
