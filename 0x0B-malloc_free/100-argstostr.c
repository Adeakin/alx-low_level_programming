#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	int x, y, z, siz;
	char *argu;

	siz = 0;
	z = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	x = 0;
	while (x < ac)
	{
		y = 0;
		while (av[x][y])
		{
			siz++;
			y++;
		}
		siz++;
		x++;
	}
	argu = malloc((sizeof(char) * siz) + 1);
	if (argu == NULL)
		return (NULL);
	x = 0;
	while (x < ac)
	{
		y = 0;
		while (av[x][y])
		{
			argu[z] = av[x][y];
			y++;
			z++;
		}
		argu[z] = '\n';
		z++;
		x++;
	}
	argu[z] = '\0';
	return (argu);
}
