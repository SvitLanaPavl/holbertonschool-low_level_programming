#include "main.h"
#include <stdio.h>

/**
 * main - Entry point.
 * Description: prints the numbers from 1 to 100.
 * on multiples 3 print Fizz, on multiples 5 print Buzz,
 * on both print FizzBuzz
 * Return: void
 */
int main(void)
{
int incr;

for (incr = 1; incr <= 100; incr++)
{
if (incr % 3 == 0 && incr % 5 == 0)
{
printf("FizzBuzz ");
}
else if (incr % 3 == 0)
{
printf("Fizz ");
}
else if (incr % 5 == 0)
{
if (incr != 100)
{
printf("Buzz ");
}
else
{
printf("Buzz");
}
}
else
{
printf("%d ", incr);
}
}
printf("\n");
return (0);
}
