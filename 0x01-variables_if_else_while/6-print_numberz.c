#include <stdio.h>
#include <ctype.h>
/**
 * main - prints single numbers of base 10
 *
 * Return: 0, if succesful
 */
int main(void)
{
	/**
	 * single digits numbers of base 10,
	 * from zero,only using putchar, no char variables
	 */
	int a;

	for (a = 0 ; a < 10 ; a++)
		putchar((a % 10 + '0'));
	putchar('\n');
	return (0);
}
