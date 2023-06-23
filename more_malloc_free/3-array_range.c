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
	int *array[];

	if (min > max)
	return (NULL);

	array = malloc(((max - min) + 1) * sizeof(int));

	if (array == NULL)
	return (NULL);

	return (array);
}
