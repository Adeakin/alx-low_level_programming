#include "main.h"
#include <stdio.h>
/**
 * fizz_buzz - prints 1 to 100, followed by a new line
 * multiple of three prints Fizz, multiple of five prints Buzz
 * multilple of both prints FizzBuzz
 * Return: Always 0 success 
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 != 0)
		{
			printf(" Fizz");
		} else if (x % 5 == 0 && x % 3 != 0)
		{
			printf(" Buzz");
		} else if (x % 3 == 0 && x % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (x == 1)
		{
			printf("%d", x);
		} else
		{
			printf(" %d", x);
		}
	}
	printf("\n");

	return (0);
}
