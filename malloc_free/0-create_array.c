#include "main.h"
/**
 * create_array - Creates an array of chars
 * Description: creates an array of chars and initializes
 * it with specific char
 * @size: size argument
 * @c: character argument
 * Return: pointer to the array, NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	return (NULL);

	char *array = malloc(size * sizeof(char));
	int i;

	if (array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
	array[i] = c;
	}
	return (array)
}
