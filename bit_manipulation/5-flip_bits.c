#include "main.h"
/**
 * count_bits - counts bits
 * Description: counts bits
 * @n: number
 * Return: count
 */
int count_bits (int n)
{
int count = 0;

while (n > 0)
{
	count++;
	n &= (n - 1);
}
return (count);
}
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
return (count_bits(n ^ m));
}
