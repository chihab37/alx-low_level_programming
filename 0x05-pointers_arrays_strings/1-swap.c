#include "main.h"
/**
  *swap_int - swaps the value of two ints
  *@a: first int
  *@b: second int
  */
void swap_int(int *a, int *b)
{
int j;

j = *a;
*a = *b;
*b = j;
}
