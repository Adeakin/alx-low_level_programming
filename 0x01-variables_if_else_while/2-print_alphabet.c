#include <stdio.h>
#include <ctype.h>
/**
 * main - prints alphabets in lower case
 *
 * Return: 0, if successful
 */
int main(void)

{
	char lowerA;

	for (lowerA = 'a' ; lowerA <= 'z' ; lowerA++)
	{
		putchar(lowerA);
	}
	putchar('\n');
	return (0);
}
