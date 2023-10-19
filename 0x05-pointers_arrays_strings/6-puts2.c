#include "main.h"

/**
 * puts - prints xters of a sting
 * @str: the used string reference
 *
 * Return: Always 0 success
 */

void puts2(char *str)
{
	int b = 0;

	while (str[b] != '\0')
	{
		if (b % 2 == 0)
		{
			_putchar(str[b]);
		}
		b++;
	}
	_putchar('\n');
}
