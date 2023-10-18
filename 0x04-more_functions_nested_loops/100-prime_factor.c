#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 success
 */

int main(void)
{
	long int p;
	long int max;
	long int q;

	p = 612852475143;
	max = -1;

	while (p % 2 == 0)
	{
		max = 2;
		p /= 2;
	}

	for (q = 3; p <= sqrt(p); q = q + 2)
	{
		while (p % q == 0)
		{
			max = q;
			p = p / q;
		}
	}
	if (p > 2)
		max = p;

	printf("%ld\n", max);

	return (0);
}
