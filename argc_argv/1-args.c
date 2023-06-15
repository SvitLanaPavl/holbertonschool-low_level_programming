#include "main.h"
/**
* main - entry point.
* description: prints the number of arguments
* @argc: number of arguments passes to the program
* @argv: array of pointers to the arguments
* Return: Always 0
*/
int main(int argc, char *argv[])
{
int number = argc - 1;
(void) *argv[0];

_putchar(number + '0');

_putchar('\n');
return (0);
}
