#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *op_add - add two ints
  *@a: 1st int
  *@b: 2nd int
  *Return: sum of the 2 ints
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  *op_sub - subtracts two integers
  *@a: first integer
  *@b: second integer
  *Return: difference between the two integers
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  *op_mul - multiplies two integers
  *@a: first integer
  *@b: second integer
  *Return: product of the two integers
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  *op_div - divides two integers
  *@a: first integer
  *@b: second integer
  *Return: result of the division
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
  *op_mod - computes the modulus of two integers
  *@a: first integer
  *@b: second integer
  *Return: modulus of the two integers
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
