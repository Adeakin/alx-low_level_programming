#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 *
 * Return: the resulting string
 */

char *rot13(char *s)
{
	int i, b;

	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (b = 0; x[b] != '\0'; b++)
		{
			if (s[i] == x[b])
			{
				s[i] = y[b];
				break;
			}
		}
	}
	return (s);
}
