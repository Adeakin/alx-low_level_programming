#include <stdio.h>

/**
 * main - Prints the sum of even Fibonacci numbers
 *        not below 4000000.
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long fibn1 = 0, fibn2 = 1, fibnsum;
	float tot_sum;

	while (1)
	{
		fibnsum = fibn1 + fibn2;
		if (fibnsum > 4000000)
			break;

		if ((fibnsum % 2) == 0)
			tot_sum += fibnsum;

		fibn1 = fibn2;
		fibn2 = fibnsum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
