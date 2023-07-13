#include "main.h"
/**
 * flip_bits - flips bits
 * Description: flips bits
 * @n: one number
 * @m: another number
 * Return: the number of bits you would need to flip from
 * one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int u = n ^ m, count = 0;

while (u > 0)
{
	count += (u & 1);
	u >>= 1;
}
return (count);
}
