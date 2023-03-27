#include "main.h"
/**
  *print_rev - prints a string in reverse
  *@s: the string
  */
void print_rev(char *s)
{
	int lent, j;
	
lent = 0;
	while (*s != '\0')
	{
		lent++;
		s++;
	}
	while (lent != 0)
	{
		putchar(j);
		lent--;
		j--;
	}
}
