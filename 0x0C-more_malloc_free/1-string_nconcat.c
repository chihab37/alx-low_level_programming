#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
  *string_nconcat - concatenates two strings
  *@s1: 1st string
  *@s2: 2nd string
  *@n: number of bytes of s2
  *Return: pointer to allocated memory
  *NULL if failure
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, i, j, len2;
	char *ptr;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = strlen(s1);
	if (s2 == NULL)
		len2 = 0;
	else
		len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	ptr = malloc(sizeof(char) * (len1 + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
		ptr[len1 + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}
