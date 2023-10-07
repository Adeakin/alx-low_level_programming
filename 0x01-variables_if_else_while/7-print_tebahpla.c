#include <stdio.h>
#include <ctype.h>
/**
 * main -  lowercase alphabet in reverse
 *
 * Return: 0, if successful
 */

int main(void)
{
	char Rv;
	/*
	 * loop through the alphabet descending
	 */
	for (Rv = 'z' ; Rv >= 'a' ; Rv--)
	{
		putchar(Rv);
	}
	putchar('\n');
	return (0);
}
