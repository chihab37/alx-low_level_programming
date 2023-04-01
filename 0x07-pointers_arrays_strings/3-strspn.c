#include "main.h"
/**
  *_strspn - function that gets the length of a prefix substring
  *@s: the string
  *@accept: compared string
  *Return: number of bytes in the initial segment of s
  */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	int i, j;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] != 32)
		{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				n++;
			}
		}
		}
		else
			return (n);
	}
	return (n);
}
