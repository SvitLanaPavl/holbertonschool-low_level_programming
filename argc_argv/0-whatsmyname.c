#include "main.h"
#include <stdio.h>
/**
* main - entry point.
* description: prints the name of the program
* Return: Always 0
*/

int main(int argc, char *argv[])
{
int i;
char *name = argv[0];

for (i = 0; name[i] != '\0'; i++)
_putchar(name[i]);

_putchar('\n');
return (0);
}
