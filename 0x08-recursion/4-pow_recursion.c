#include "main.h"
/**
  *_pow_recursion - returns the value of x raised to the power of y
  *@x: 1st int
  *@y: 2nd int power
  *Return: value
  */
int _pow_recursion(int x, int y)
{
	int n = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y > 1)
	{
		n = x * (_pow_recursion(x, (y - 1)));
	}
	return (n);
}
