#include "main.h"
/**
  *_strlen_recursion - returns the length of a string
  *@s: the string
  *Return: length of string
  */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		n = n + _strlen_recursion(s + 1);
	}
	else
		return (0);
	return (n);
}
