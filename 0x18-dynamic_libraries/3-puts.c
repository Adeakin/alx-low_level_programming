#include "main.h"

/**
 * _puts - prints a string and a new line
 * @str: pointer to print a string
 *
 * Return: 0
 */

void _puts(char *str)
{
	int b = 0;

	while (str[b])
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
