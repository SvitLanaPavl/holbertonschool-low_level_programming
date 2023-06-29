#include "3-calc.h"
/**
 * main - entry point
 * Description: performs simple operations
 * @argc: argument count
 * @argv: argument vector
 * Return: result, error if fails
 */
int main(int argc, char *argv)
{
	char *operator;
	int a, b, result;
	int (*func)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}
	operator = argv[2];
	func = get_op_func(operator);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (!func)
	{
	printf("Error\n");
	exit(99);
	}
	result = func(a, b);
	printf("%d\n", result);
	return (0);
}
