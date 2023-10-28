#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 sucess.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
