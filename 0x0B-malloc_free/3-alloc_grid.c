#include "main.h"
#include <stdlib.h>
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
	int **p;
	int i = 0, j = 0;

	if (width == 0 || height == 0)
		return (NULL);

	p = (int **) malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < width ; i++)
		p[i] = (int *) malloc(sizeof(int) * width);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
