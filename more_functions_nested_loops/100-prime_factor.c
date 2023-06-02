#include <stdio.h>

int main()
{
	long int number = 612852475143;
	long int max_prime_factor = 1;
	long int i;

	for (i = 2; i * i <= number; i++)
	{
	while (number % i == 0)
	{
	max_prime_factor = i;
	number /= i;
	}
	}

	if (number > 1)
	{
	max_prime_factor = number;
	}
	return (max_prime_factor);
}

