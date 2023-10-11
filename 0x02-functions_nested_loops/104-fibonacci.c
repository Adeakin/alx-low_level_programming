#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fibn1 = 0, fibn2 = 1, sum;
	unsigned long fibn1_half1, fibn1_half2, fibn2_half1, fibn2_half2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		sum = fibn1 + fibn2;
		printf("%lu, ", sum);

		fibn1 = fibn2;
		fibn2 = sum;
	}

	fibn1_half1 = fibn1 / 10000000000;
	fibn2_half1 = fibn2 / 10000000000;
	fibn1_half2 = fibn1 % 10000000000;
	fibn2_half2 = fibn2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = fibn1_half1 + fibn2_half1;
		half2 = fibn1_half2 + fibn2_half2;
		if (fibn1_half2 + fibn2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");

		fibn1_half1 = fibn2_half1;
		fibn1_half2 = fibn2_half2;
		fibn2_half1 = half1;
		fibn2_half2 = half2;
	}
	printf("\n");
	return (0);
}
