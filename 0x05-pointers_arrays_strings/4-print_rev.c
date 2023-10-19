#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: the used sting reference pointer
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int b = 0;

	while (s[b])
		b++;
	while (b--)
		_putchar(s[b]);
	_putchar('\n');
}
