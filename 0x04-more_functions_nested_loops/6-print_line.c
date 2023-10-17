#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	} else 
	{
		int a;

		for (a = 1; a <= n; a++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
