#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string
 */

char *leet(char *s)
{
	int i, b;

	char *x = "aAeEoOtTlL";
	char *y = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (b = 0; b < 10; b++)
		{
			if (s[i] == x[b])
			{
				s[i] = y[b];
			}
		}
	}

	return (s);
}
