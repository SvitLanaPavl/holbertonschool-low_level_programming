#include "main.h"
/**
* main - entry point.
* description: prints the result of multiplication
* of two arguments
* @argc: number of arguments passes to the program
* @argv: array of pointers to the arguments
* Return: Always 0, if does not receive args prints "Error" return 1
*/

int main(int argc, char *argv[])
{
	int arg1, arg2, result;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);
	result = arg1 * arg2;

	printf("%d\n", result);
	return (0);
}
