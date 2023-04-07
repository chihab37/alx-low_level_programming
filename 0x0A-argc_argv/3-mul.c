#include <stdio.h>
#include <stdlib.h>
/**
  *main - multiplies two numbers input as arguments
  *@argc: arguments counts
  *@argv: argument array
  *Return: 0 success, 1 error
  */
int main(int argc, char **argv)
{
	int n;

	(void)argc;
	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", n);
		return (0);
	}
}
