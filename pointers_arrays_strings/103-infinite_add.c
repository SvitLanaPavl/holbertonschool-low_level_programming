#include "main.h"
/**
 * infinite_add - Adds two numbers
 * Description: adds two numbers
 * @n1: number 1
 * @n2: number 2
 * @r: buffer the function will use to store the result
 * @size_r: buffer size
 * Return: pointer to the result, if the result cannot be stored 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, b, sum;
	
	memset(r, 0, size_r);

	a = atoi(n1);
	b = atoi(n2);

	sum = a + b;;
	r = sum;
	}
return (r);
}
