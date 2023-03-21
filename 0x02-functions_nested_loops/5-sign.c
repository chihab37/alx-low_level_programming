#include "main.h"
/**
  * print_sign - printf the sign of a number
  *@n: the number
  *Return: 1 if n greater than 0
  *0 if it's 0, -1 if it's less than 0
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
