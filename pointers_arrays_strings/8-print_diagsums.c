#include "main.h"
/**
 * print_diagsums - Prints the sum of the two diagonals
 * Description: prints the sum of the two diagonals of a square matrix of integers
 * @a: pointer to an array of integers
 * @size: the number of elements in the array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
int i, j;
int row = size / 2;
int col = size / 2;
int prin = 0;
int secon = 0;

for (i = 0; i < row; i++)
{
	for (j = 0; j < col; j++)
	{
		if (i == j)
		prin += a[i][j];

		if ((i + j) == (col - 1))
		secon += a[i][j];
	}
}
}
