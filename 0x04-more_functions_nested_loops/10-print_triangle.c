#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	} else
	{
		int x, y;

		for (x = 1; x <= size; x++)
		{
			for (y = x; y < size; y++)
			{
				putchar(' ');
			}
			for (y = 1; y <= x; y++)
			{
				putchar('#');
			}

			putchar('\n');
		}
	}
}
