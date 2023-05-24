#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longInt;
	long long longLong;
	float floatType;

	printf("Size of int: %zu bytes\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of int: %zu bytes\n", sizeof(longType));
	printf("Size of int: %zu bytes\n", sizeof(longLong));
	printf("Size of int: %zu bytes\n", sizeof(floatType));
	return (0);
}
