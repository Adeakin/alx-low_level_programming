#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - generates random numbers,delcares + OR -
 *
 * Return: 1, if succesful
 */

int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
