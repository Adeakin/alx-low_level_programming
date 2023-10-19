#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string to be reversed
 * Return: 0
 */

void rev_string(char *s)
{
	int ver, b, ring;
	char rev;

	for (ver = 0; s[ver] != '\0'; ver++);

	b = 0;
	ring = ver / 2;

	while (ring--)
	{
		rev = s[ver - b - 1];
		s[ver - b - 1] = s[b];
		s[b] = rev;
		b++;
	}
}
