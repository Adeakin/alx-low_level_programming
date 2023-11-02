#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int help, a, b;

	help = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			help = 0;
		else if (help == 0)
		{
			help = 1;
			b++;
		}
	}

	return (b);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int x, y = 0, len = 0, words, a = 0, start, end;

	while (*(str + len))
		len++;

	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (x = 0; x <= len; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (a)
			{
				end = x;
				tmp = (char *) malloc(sizeof(char) * (a + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[y] = tmp - a;
				y++;
				a = 0;
			}
		}
		else if (a++ == 0)
			start = x;
	}

	matrix[y] = NULL;

	return (matrix);
}
