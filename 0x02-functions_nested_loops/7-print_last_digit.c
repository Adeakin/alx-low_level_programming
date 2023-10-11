#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @y: The given number.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int y)
{
	int last_digit = y % 10;

	if (last_digit < 0)
		last_digit *= -1;/*changes last digit back to + if its -*/

	_putchar(last_digit + '0');

	return (last_digit);
}
