#include "main.h"
/**
  *puts_half - prints half of a string
  *@str: the string
  */
void puts_half(char *str)
{
	int lent, n, i;

lent = 0;
while (str[lent] != '\0')
{
	lent++;
}
n = lent / 2;
if ((lent % 2) != 0)
{
	n += 1;
}
	for (i = n; i < lent; i++)
{
	putchar(str[i]);
}
putchar('\n');
}
