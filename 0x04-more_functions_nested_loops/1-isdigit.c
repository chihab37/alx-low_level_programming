#include "main.h"
/**
  *_isdigit -  a function that checks for a digit (0 through 9)
  *@c: character to be checked
  *Return: 1 if c is digit, 0 ifnot
  */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}
