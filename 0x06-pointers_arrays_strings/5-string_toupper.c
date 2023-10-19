#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to modify
 *
 * @Return: the resulting string
 */
char *string_toupper(char *s)
{
	int b;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] >= 'a' && s[b] <= 'z')
			s[b] = s[b] -32;
	}

	return (s);
}
