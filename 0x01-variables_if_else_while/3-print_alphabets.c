#include <stdio.h>
#include <ctype.h>
/**
 * main - alphabet in lowercase and uppercase
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
	for (lowerA = 'a' ; lowerA <= 'z' ; lowerA++)
	{
		putchar(toupper(lowerA));
	}
	putchar('\n');
	return (0);
}
