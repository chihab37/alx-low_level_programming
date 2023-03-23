#include "main.h"
/**
  *_isupper - function that checks for uppercase
  *@c: character to be checked
  *Return: 1 if uppercase and 0 ifnot
  */
int _isupper(int c)
{
if (c <= 'Z' && c >= 'A')
return (1);
else
return (0);
}
