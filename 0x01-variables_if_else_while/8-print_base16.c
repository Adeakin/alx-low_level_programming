#include <stdio.h>
/**
 * main - is entry of program
 *
 * Return: 0, if succesful
 */
int main(void)
{
	/*
	 * prints the hexadecimal base16,using putchar only
	 * loops through 9-0,prints them simulating char with arithemtics
	 * loops through a-f, prints them
	 */
	int p;
	char v;

	for (p = 0 ; p < 10 ; p++)
		putchar((p % 10) + '0');

	for (v = 'a' ; v <= 'f' ; v++)
		putchar(v);
	putchar('\n');

	return (0);
}
