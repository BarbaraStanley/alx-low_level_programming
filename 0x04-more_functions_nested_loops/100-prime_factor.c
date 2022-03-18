#include <stdio.h>

/**
 * main - function that finds and prints the largest prime factor of 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long n = 612852475143;
	long divisor = 2;
	long larg_prime = 0;

	while (n != 1)
	{
		if (n % divisor == 0)
		{
			n = n / divisor;
			larg_prime = divisor;
		}
		divisor += 1;
	}
	printf("%ld\n", larg_prime);
	return (0);
}
