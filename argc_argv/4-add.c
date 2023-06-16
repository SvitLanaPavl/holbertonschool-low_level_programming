#include "main.h"
/**
* main - adds positive numbers.
* description: prints the result of adding positive numbers
* of two arguments
* @argc: number of arguments passes to the program
* @argv: array of pointers to the arguments
* Return: Always 0, if contains not digit prints "Error" return 1, if no
* number passed print 0
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char chr;

	if (argc == 0)
	{
	printf("0\n");
	return (0);
	}

	for (i = 0; i < argc; i++)
	{
	char chr = *argv[i];

	if (chr > '0' && chr < '9')
	sum += atoi(argv[i]);
	
	else
	{
	printf("Error\n");
	return (1);
	}
	}
	printf("%d", sum);
	return (0);
}
