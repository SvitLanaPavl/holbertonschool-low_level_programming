#include "variadic_functions.h"
/* sum_them_all - return the sum of all its parameters
 * Description: sums all the func's parameters
 * @n: number of arguments
 * Return: sum of parameters, if n is return 0
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, arg, sum = 0;
va_list ap;
va_start(ap, n);

if (n == 0)
return (0);

for (i = 0; i < n; i++)
{
arg = va_arg(ap, int);
sum += arg;
}
va_end(ap);
return (sum);
}
