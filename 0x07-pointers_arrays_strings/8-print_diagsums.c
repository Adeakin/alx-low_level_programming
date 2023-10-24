#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int x;

	unsigned int sumd, sumd1;

	sumd = 0;
	sumd1 = 0;

	for (x = 0; x < size; x++)
	{
		sumd += a[(size * x) + x];
		sumd1 += a[(size * (x + 1)) - (x + 1)];
	}

	printf("%d, %d\n", sumd, sumd1);
}

