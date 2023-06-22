#include "main.h"
/**
 * alloc_grid - return a pointer to a 2-dimensional array
 * Description: returns a pointer to a 2-dimensional array
 * @width: width argument
 * @height: height argument
 * Return: NULL on failure, if width and height are 0
 * or negative return NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
	return (NULL);

	grid = malloc(sizeof(int *) * height);
	
	if (grid == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
	grid[i] = malloc(sizeof(int) * width);
	if (grid[i] == NULL)
	{
	for (j = 0; j < i; j++)
	{
	free (grid[j];
	}
	free(grid);
	return (NULL);
	}
	for (j = 0; j < width; j++)
	{
	grid[i][j] = 0;
	}
	}
return (grid);
}
