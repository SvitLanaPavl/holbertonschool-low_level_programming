#include "main.h"
/**
 * print_diagsums - Prints the sum of the two diagonals
 * Description: prints the sum of the two diagonals of a square matrix of
 * integers
 * @a: pointer to an array of integers
 * @size: the number of elements in the array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
int i;
int prin = 0;
int secon = 0;

for (i = 0; i < size; i++)
{
	prin += a[i * size + i];
	secon += a[i * size + (size - 1 - i)];
}
printf("%d, %d\n", prin, secon);
}
