#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
  *_strdup - returns a pointer to a newly allocated space
  *which contains a copy of the string given as a parameter
  *@str: string
  *Return: pointer to new string, NULL if str == NULL
  */
char *_strdup(char *str)
{
	char *newstr;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	newstr = (char *)malloc(strlen(str) + 1);
	if (newstr == NULL)
		return (NULL);

	for (i = 0; i <= strlen(str); i++)
		newstr[i] = str[i];

	return (newstr);
}
