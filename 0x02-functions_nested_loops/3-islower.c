#include "main.h"
/**
  * _islower - checks for the lowercase character
  * Return: 1 if c is lowercase, else 0
  * @c: the char
  */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
	return (1);
}
	else
{
	return (0);
}
}
