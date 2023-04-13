#include "main.h"
#include <stdlib.h>

/**
  *malloc_checked - allocates memory using malloc
  *@b: number of bytes to allocate
  *Return: pointer to the allocation mem, or 98 is failure
  */
void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);

	return (s);
}
