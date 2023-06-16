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
	int i, j, sum, len = 0;;

	if (argc < 2)
	{
	printf("0\n");
	return (0);
	}
	for (i = 1; i < argc; i++)
	{
	sum += atoi(argv[i]);
	}
	if (argv[i] < '1' || argv[i] > '9')
	{
	printf("Error\n");
	return (1);
	}
	printf("%d", sum);
	return (0);
}
