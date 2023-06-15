#include "main.h"
#include <stdio.h>
/**
* main - entry point.
* description: prints the name of the program
* @argc: number of arguments passes to the program
* @argv: array of pointers to the arguments
* Return: Always 0
*/

int main((void)argc, char *argv[])
{
int i;
char *name = argv[0];

for (i = 0; name[i] != '\0'; i++)
_putchar(name[i]);

_putchar('\n');
return (0);
}
