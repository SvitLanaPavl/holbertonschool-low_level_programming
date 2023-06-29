#include "3-calc.h"
/**
 * get_op_func - selects the correct function
 * Description: selects the correct function to perform
 * the operaton asked by the user
 * @s: operator passed as an argument
 * Return: a pointer to the function that corresponds to the
 * operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
while (ops[i].op != NULL)
{
if (strcmp(s, ops[i].op) == 0)
{
return (ops[i].f)
}
i++;;
}
return (NULL);
}
