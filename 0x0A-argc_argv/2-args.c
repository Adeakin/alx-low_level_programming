#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: o
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
