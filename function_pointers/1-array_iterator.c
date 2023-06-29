#include "function_pointers.h"
/**
 * print_name - Executes a function given as a parameter
 * Desription: executes a function given as a parameter
 * @array: array
 * @size: size of the array
 * @action: pointer to the function to be used
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

for (i = 0; i < size; i++)
action(array[i]);
}
