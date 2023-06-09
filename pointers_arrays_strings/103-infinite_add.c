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
	unsigned int value1 = 0;
	unsigned int value2 = 0;
	int i;
	int flag = 0;
	
	_memset(r, 0, size_r);

	for (i = 0; n1[i] != '\0' && n2[i] != '\0'; i++)
	{
		while ((n1[i] >= '0' && n1[i] <= '9') && (n1[i] >= '0' && n1[i] <= '9'))
		      {
			      flag = 1;
			      value1 = value1 * 10 + n1[i] - '0';
			      value2 = value2 * 10 + n1[i] - '0';
			      i++
		      }
		if (flag == 0)
		break;

		sum = value1 + value2;
		r[i] = sum;
	}
return (r);
}
