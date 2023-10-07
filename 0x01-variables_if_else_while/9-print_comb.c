#include <stdio.h>
#include <ctype.h>
/**
 * main - starting point
 *
 * Return: 0, if successfull
 */

int main(void)
{
	int x;

	for (x = 0 ; x <= 9 ; x++)

	{
		putchar((x % 10) + '0');
		if (x == 9)
		/*continue printing comma and space except if x == 9*/
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
