#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  *main - adds positive numbers
  *@argc: argument count
  *@argv: argument array
  *Return: 0 success, 1 error
  */
int main(int argc, char **argv)
{
	int i, j, n;

	n = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		n += atoi(argv[i]);
	}
	printf("%d\n", n);
	return (0);
}
