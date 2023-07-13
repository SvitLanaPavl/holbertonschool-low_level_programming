#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * Description: sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index
 * Return: 1 it worked or -1 if error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= 64)
return (-1);

n |= 1UL << index;
return (1)
}
