#include "main.h"
#include <stdlib.h>
/**
  *alloc_grid - returns a pointer to a 2 dim array of ints
  *@width: of the array
  *@height: height of the array
  *Return: pointer or NULL on failure
  */
int **alloc_grid(int width, int height)
{
	int **s;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = (int **)malloc(height * sizeof(int *));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		s[i] = (int *)malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(s[j]);

		free(s);
		return (NULL);
		}

	for (j = 0; j < width; j++)
		s[i][j] = 0;
	}
	return (s);
}
