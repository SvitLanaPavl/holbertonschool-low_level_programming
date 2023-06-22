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
	char *array;
	unsigned int i;

	if (size == 0)
	return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
	array[i] = c;
	}
	return (array);
}
