#include "main.h"
/**
 * main - entry point
 * Description: multiplies two positive integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int n1, n2, mul;
	char *num1, *num2;

	if (argc != 3)
	{
	printf("Error\n");
	exit(98);
	}
	num1 = argv[1];
	num2 = argv[2];

	if (!is_digits(num1) || !is_digits(num2))
	{
	printf("Error\n");
	exit(98);
	}
	n1 = atoi(num1);
	n2 = atoi(num2);
	mul = n1 * n2;
	printf("%d\n", mul);
	return (0);
}
int is_digits (char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (str[i] < '0' || str[i] > '9')
	{
		return (0);
	}
	}
	return (1);
}
