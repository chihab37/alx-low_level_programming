#include "main.h"
/**
  *_strstr - function that locates a substring
  *@haystack: string
  *@needle: 2nd string
  *Return: pointer of the beginnig of substring or NULL if not found
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != NULL; i++)
	{
		for (j = 0; needle[j] != NULL; j++)
		{
			if (haystack[i + j] != needle[j])
			break;
		}
		if (needle[j] == '\0')
			return (haystack[i]);
	}
	return (NULL);
}
