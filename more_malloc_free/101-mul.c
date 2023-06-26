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
	int n1, n2, mul, i, j;
	char *num1, *num2;

	if (argc != 3)
	{
	printf("Error\n");
	exit(98);
	}
	num1 = argv[1];
	num2 = argv[2];

	for (i = 0, j = 0; num1[i] != '\0' && num2[j] != '\0'; i++, j++)
	{
	if ((num1[i] < '0' && num1[i] > '9') || (num2[j] < '0' && num2[i] > '9'))
	{
	printf("Error\n");
	exit(98);
	}
	}
	n1 = atoi(num1);
	n2 = atoi(num2);
	mul = n1 * n2;
	printf("%d\n", mul);
	return (0);
}
