#include "main.h"
/**
 * print_binary - prints the binary representation
 * Description: prints the binary representation
 * @n: argument
 * Return: void
 */
void print_binary(unsigned long int n)
{
while (n && n != 1)
{
if (n & 1)
printf("1");

else
{
printf("0");
n >>= 1;
}
}
if (n == 1)
printf("1");

printf("\n");
}
