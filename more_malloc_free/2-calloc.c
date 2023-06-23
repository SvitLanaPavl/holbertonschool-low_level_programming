#include "main.h"
/**
 * _calloc - allocates memory for an array using malloc
 * Description: allocates memory for an array using malloc
 * @nmemb: number of elements argument
 * @size: number of bytes each
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
	return (NULL);

	void *memptr = malloc(nmemb * size);

	if (memptr != NULL)
	memset(memptr, 0, nmemb * size);

	return (memptr);
}
