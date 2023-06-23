#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * Description: allocates memory using malloc
 * @b: argument
 * Return: pointer to the allocates memory
 */
void *malloc_checked(unsigned int b)
{
	void *alcmem = malloc(b);

	if (alcmem == NULL)
	exit(98);

	return (alcmem);
}
