#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
  *str_concat - cancatenates two strings
  *@s1: first string
  *@s2: second string
  *Return: pointer new memory contains s1, s2 follow NUL, NULL otherwise
  */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	char *s12;
	unsigned int len1, len2;

	len1 = len2 = 0;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	s12 = (char *)malloc(len1 + len2 + 1);
		if (s12 == NULL)
			return (NULL);

	for (i = 0; i < len1; i++)
		s12[i] = s1[i];

	for (j = 0; j < len2; j++)
		s12[i + j] = s2[j];
	s12[i + j] = '\0';

	return (s12);
}
