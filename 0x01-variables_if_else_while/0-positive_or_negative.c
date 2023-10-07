#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - generates random numbers,delcares + OR -
 *
 * Return: 1, if succesful
 */
int main(void)
{
	int n;

	/*code generates random number*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is greater than zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is less than zero\n", n);
	}
	if (n == 0)
	{
		printf("%d equal to zero\n", n);
	}
	return (0);
}
