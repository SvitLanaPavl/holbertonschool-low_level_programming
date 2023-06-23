#include "main.h"
/**
 * array_range - Creates an array of integers
 * Description: creates an array of integers
 * @min: min argument
 * @max: max argument
 * Return: pointer to the newly created array, NULL if fails
 */
int *array_range(int min, int max)
{
	int i, size;
	int *array;

	if (min > max)
	return (NULL);

	size = (max - min) + 1;
	array = malloc(size * sizeof(int));

	if (array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
	array[i] = min + i;
	}

	return (array);
}
