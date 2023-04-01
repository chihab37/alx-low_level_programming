#include "main.h"
/**
  *_memset - a function the fills the memory with a const bytes
  *@s: input
  *@b: constant bytes
  *@n: n bytes
  *Return: pointer to s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
