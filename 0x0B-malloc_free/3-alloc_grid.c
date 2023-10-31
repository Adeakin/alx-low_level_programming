#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **todim;
	int n, p;

	if (height <= 0 || width <= 0)
		return (NULL);

	todim = (int **) malloc(sizeof(int *) * height);

	if (todim == NULL)
		return (NULL);

	for (n = 0; n < height; n++)
	{
		todim[n] = (int *) malloc(sizeof(int) * width);
		if (todim[n] == NULL)
		{
			free(todim);
			for (p = 0; p <= n; p++)
				free(todim[p]);
			return (NULL);
		}
	}

	for (n = 0; n < height; n++)
	{
		for (p = 0; p < width; p++)
		{
			todim[n][p] = 0;
		}
	}
	return (todim);
}

