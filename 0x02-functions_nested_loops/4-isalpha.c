#include "main.h"
/**
  *_isalpha - checks for alphabetic character
  *@c: character
  *Return: 1 if letter is upper or lowercase, else 0
  */
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
else
{
	return (0);
}
_putchar('\n');
}
