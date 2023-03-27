#include "main.h"
/**
  *rev_string - reverse a string
  *@s: the string
  */
void rev_string(char *s)
{
	char k, *j, *i;

	j = s;
	i = s;
	while (*i != '\0')
	{
		i++;
	}
	i--;
	while (j < i)
	{
		k = *j;
		*j = *i;
		*i = k;
		j++;
		i--;
	}
}
