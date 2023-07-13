#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * Description: returns the value of a bit at agiven index
 * @n: number
 * @index: index
 * Return: the value of the bit at index or -1 if error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= 64)
return (-1);

return ((n >> index) & 1);
}

