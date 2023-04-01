#include "main.h"

/**
  *_strchr - function that locates a character in a string
  *@s: the string
  *@c: character
  *Return: pointer to the 1st occurence of the char c or null if not found
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
