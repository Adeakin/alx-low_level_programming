#include <stdio.h>
/**
 * main - is entry of program
 *
 * Return: 0, if succesful
 */
int main(void)
{
	/*
	 * prints all combination of 3 different digits once,in accending order
	 * after each combination follows a coma and a space
	 */

	/* take ab as possible digits */
	int x, y, z;

	/*loop through x,1st digit,lowest of the 0, highest possible is 7*/
	for (x = 0 ; x <= 7 ; x++)
	{
		/*loop through y,2nd digit,higher than x by 1,highest possible is 8*/
		for (y = x + 1 ; y <= 8 ; y++)
		{
			/*loop through z,2nd digit,higher than y by 1,highest possible is 9*/
			for (z = y + 1 ; z <= 9 ; z++)
			{
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');
				putchar((z % 10) + '0');
				/*continues to put coma,space,stop if last highest combination is met*/
				if (x == 7 && y == 8 && z == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
