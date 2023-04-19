#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *main - entry point
  *@argc: Number of arguments passed to the program
  *@argv: Array of pointers to the arguments passed to the program
  *Return: 0 on success, 98 if argc is not equal to 4, 99 if the operator
  *is not valid, or 100 if an attempt to divide by zero is made
  */
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	oprt = get_op_func(argv[2]);
	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
