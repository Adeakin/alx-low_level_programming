#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *        fib's next no. is addition of last two numbers.
 *
 *
 *
 * Return: 0 if succesful
 */
int main(void)
{
	int lup;
	unsigned long n1 = 0, n2 = 1, fibn;

	for (lup = 0; lup < 50; lup++)
	{
		fibn = n1 + n2;
		printf("%lu", fibn);

		n1 = n2;
		n2 = fibn;

		if (lup == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
