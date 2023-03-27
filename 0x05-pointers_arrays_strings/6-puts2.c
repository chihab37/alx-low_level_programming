#include "main.h"
/**
  *puts2 - prints every other character of a string
  *@str: the string
  */
void puts2(char *str)
{
	int i, lent;

lent = 0;
while (str[lent] != '\0')
{
	lent++;
}
	for (i = 1; i <= lent; i++)
{
	if ((i % 2) != 0)
	{
		putchar(*str);
	}
	str++;
}
putchar('\n');
}
