#include <stdio.h>
/**
  *main - prints its name
  *@argc: command count
  *@argv: array of commmands
  *Return: 0 success
  */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
