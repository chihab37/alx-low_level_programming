#include "main.h"
/**
  *print_diagsums - function that prints
  *the sum of two diags of a square matrix if an int
  *@a: array
  *@size : size of diagonal
  */
void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 = s1 + a[(size + 1) * i];
		s2 = s2 + a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", s1, s2);
}
