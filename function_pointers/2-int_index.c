#include "function_pointers.h"
/**
 * int_index - Searches for an integer
 * Desription: searches for an integer
 * @array: pointer to the array
 * @size: number of element of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first element for which cmp does not return 0,
 * if no element matches or size is <= 0 return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL && cmp == NULL)
return (NULL);

if (size <= 0) return (-1);

for (i = 0; i < size; i++)
{
if (array[i] >= 0 && array[i] <= 9)
{
cmp(array[i]);
return (i);
}
}
return (-1);
}
