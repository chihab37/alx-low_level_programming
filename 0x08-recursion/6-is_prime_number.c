#include "main.h"
/**
  *pre_prime - checks to see if  number is prime
  *@a: 1st int
  *@b: 2nd int
  *Return: recursion
  */
int pre_prime(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (pre_prime(a + 1, b));
}

/**
  *is_prime_number - return if the number is prime
  *@n: the integer
  *Return: the int
  */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (pre_prime(2, n));
}
