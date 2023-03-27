#include "main.h"
/**
  *_strlen - returns lenght of string
  *@s: the string
  *Return: the lenght
  */
int _strlen(char *s)
{
	int j = 0;

while (*s != '\0')
{
	j++;
	s++;
}
return (j);
}
