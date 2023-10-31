#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *dupl;
	unsigned int n, len;

	n = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dupl = malloc(sizeof(char) * (len + 1));

	if (dupl == NULL)
		return (NULL);

	while ((dupl[n] = str[n]) != '\0')
		n++;

	return (dupl);
}
