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
	int i, j, sum, len = 0;
	bool isDigit = true;

	if (argc == 0)
	{
	printf("0\n");
	return (0);
	}
	for (i = 0; i < argc; i++)
	{
	len = strlen(argv[i]);
	for (j = 0; j < len; j++)
	{
	if (argv[i][j] < '0' || argv[i][j] > '9')
	{
	isDigit = false;
	break;
	}
	}
	if (isDigit)
	sum += atoi((char *)argv[i][j]);
	else
	{
	printf("Error\n");
	return (1);
	}
	}
	printf("%d", sum);
	return (0);
}
