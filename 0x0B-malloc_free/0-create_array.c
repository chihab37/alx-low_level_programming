#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *create_array - creates an array of chars
  *@size: size of array
  *@c: intialization char
  *Return: NULL if size = 0 or fails
  *pointer if success
  */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = (char *)malloc(size);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
