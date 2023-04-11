#include <stdlib.h>
#include "main.h"
/**
  *argstostr - concatenates all arguments of your program
  *@ac: argument count
  *@av: array of strings
  *Return: new string with arguments seperated by \n
  *NULL if failure
  */
char *argstostr(int ac, char **av)
{
	int i, j, len, c;
	char *s;

	c = len = 0;
	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	s = (char *)malloc(len + ac + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			s[c++] = av[i][j];

		s[c++] = '\n';
	}

	s[c] = '\0';

	return (s);
}
