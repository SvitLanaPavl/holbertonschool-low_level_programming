#include "main.h"
/**
 * _realloc - Reallocates a memory block
 * Description: reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size in bytes of the new memory block 
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;

if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
new_ptr = malloc(new_size);

else
{
	if (new_size <= old_size)
	{
	return (ptr);
	}
new_ptr = malloc(new_size);

if (new_ptr == NULL)
{
return (NULL);
}
memcpy(new_ptr, ptr, old_size);
free(ptr);
}
return (new_ptr);
}
