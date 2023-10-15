#include "main.h"

/**
 * print_most_numbers - print 0-9 and except 2 and 4
 *
 */

void print_most_numbers(void)

{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a != 2 && a != 4)
		{
			putchar(a + '0');
		}
	}
	putchar('\n');
}
