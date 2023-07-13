#include "main.h"
/**
 * flip_bit - flips bits
 * Description: flips bits
 * @n: one number
 * @m: another number
 * Return: the number of bits you would need to flip from
 * one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
return (n ^ (1 << (m - 1)));
}
