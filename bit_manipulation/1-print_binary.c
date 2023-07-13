#include "main.h"
/**
 * print_binary - prints the binary representation
 * Description: prints the binary representation
 * @n: argument
 * Return: void
 */
void print_binary(unsigned long int n)
{
int i, k;

for (i = 31; i >= 0; i--)
{
k = n >> i;

if (k & 1)
printf("1");

else
printf("0");
}
}
