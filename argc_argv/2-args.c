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
int i, j;

for (i = 0; i < argc; i++)
{
for (j = 0; j < strlen(argv[i]); j++)
{
_putchar(argv[i][j]);
}
_putchar('\n');
}
return (0);
}
