#include "main.h"
/**
  *reverse_array - reverses an array of integers
  *@n: number of integers
  *@a: the array of ints
  */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	n--;
	while (i < n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}
}
