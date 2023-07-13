#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * Description: sets the value of a bit to 0 at a given index
 * @n: number
 * @index: index
 * Return: 1 it worked or -1 if error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= 64)
return (-1);

*n &= ~(1 << index);
return (1);
}
