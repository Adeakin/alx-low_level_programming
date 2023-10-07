#include <stdio.h>
#include <ctype.h>
/**
 * main - prints all lower case letters except q and e
 *
 * Return: 0, if successful
 */

int main(void)
{
	char lowerA;

	for (lowerA = 'a' ; lowerA <= 'z' ; lowerA++)
	{
		if (lowerA != 'e' && lowerA != 'q')
			putchar(lowerA);
	}
	putchar ('\n');
	return (0);
}
