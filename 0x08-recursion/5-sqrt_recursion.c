#include "main.h"
/**
  *sqrt_j - find the square root
  *@x: an estimate for the sqaure root
  *@n: the number
  *Return: recursion
  */
int sqrt_j(int n, int x)
{
	int sqt;

	sqt = (x + n / x) / 2;
	if (sqt == x || sqt == x + 1)
	{
		return (sqt);
	}
	return (sqrt_j(n, sqt));
}
/**
*_sqrt_recursion - returns the natural square root of a number
*@n: the number
*Return: natural square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (sqrt_j(n, 1));
}
