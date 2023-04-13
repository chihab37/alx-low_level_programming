#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *array_range - creates an array of ints > values from min to max
  *@min: the minimum value of the range
  *@max: the maximum value of the range
  *Return: pointer to new array
  *NULL if failure or min > max
  */
int *array_range(int min, int max)
{
	int i = 0;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
