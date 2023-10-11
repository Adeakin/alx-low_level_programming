#include "main.h"

/**
 * _abs - computes the absolute valuse of an integer
 * @x: the integer to be computed
 *
 * Return: the absolute value of an integer
 */

int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (-x);
}
