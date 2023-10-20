#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */
void rev_string(char *n)
{
	int i = 0;
	int b = 0;
	char ver;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (b = 0; b < i; b++, i--)
	{
		ver = *(n + b);
		*(n + b) = *(n + i);
		*(n + i) = ver;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int flow = 0, i = 0, b = 0, numb = 0;
	int fin1 = 0, fin2 = 0, ver_rep = 0;
	
	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + b) != '\0')
		b++;
	i--;
	b--;
	if (b >= size_r || i >= size_r)
		return (0);
	while (b >= 0 || i >= 0 || flow == 1)
	{
		if (i < 0)
			fin1 = 0;
		else
			fin1 = *(n1 + i) - '0';
		if (b < 0)
			fin2 = 0;
		else
			fin2 = *(n2 + b) - '0';
		ver_rep = fin1 + fin2 + flow;
		if (ver_rep >= 10)
			flow = 1;
		else
			flow = 0;
		if (numb >= (size_r -1))
			return (0);
		*(r + numb) = (ver_rep % 10) + '0';
		numb++;
		b--;
		i--;
	}
	if (numb == size_r)
		return (0);
	*(r + numb) = '\0';
	rev_string(r);
	return (r);
}
