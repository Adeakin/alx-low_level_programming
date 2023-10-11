#include <stdio.h>


/**
 * main -To add all multiples of 5 or 3 below 1024
 *       together.
 *
 * Return: 0 if succesful
 */
int main(void)
{
	int y, total = 0;

	for (y = 0; y <= 1023; y++)
	{
		if ((y % 3) == 0 || (y % 5) == 0)
			total = total + y;
	}

	printf("%d\n", total);

	return (0);
}
