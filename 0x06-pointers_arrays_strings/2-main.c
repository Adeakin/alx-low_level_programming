#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98];
	char *ptr;
	int b;
	
	for (b = 0; b < 98 - 1; b++)
	{
		s1[b] = '*';
	}
	s1[b] = '\0';
	printf("%s\n", s1);
	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
	printf("%s\n", s1);
	printf("%s\n", ptr);
	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
	printf("%s", s1);
	printf("%s", ptr);
	for (b = 0; b < 98; b++)
	{
		if (b % 10)
		{
			printf(" ");
		}
	if (!(b % 10) && b)
	{
		printf("\n");
	}
	printf("0x%02x", s1[b]);
	}
	printf("\n");
	return (0);
}
