#include "main.h"
/**
 * print_binary - prints the binary representation
 * Description: prints the binary representation
 * @n: argument
 * Return: void
 */
void print_binary(unsigned long int n)
{
int i;
char c;

for (i = 63; i >= 0; i--)
{
c = (n >> i) & 1;
printf("%c", c + '0');
}
}
