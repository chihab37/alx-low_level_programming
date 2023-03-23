#include "main.h"
/**
  *print_diagonal -  draws a diagonal line on the terminal
  *@n: length of the line
  */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	return;
	}
		for (i = 1; i <= n; i++)
		{
		for (j = 1; j <= i; j++)
		{
			if (j == i)
			{
			_putchar('\\');
			_putchar('\n');
			}
			else
			_putchar(' ');
			}
		}
}
