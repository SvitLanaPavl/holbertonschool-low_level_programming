#include "main.h"
/**
* main - entry point.
* description: prints all arguments
* @argc: number of arguments passes to the program
* @argv: array of pointers to the arguments
* Return: Always 0
*/

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
_putchar(char *(argv[i]));
_putchar('\n');
}
return (0);
}
