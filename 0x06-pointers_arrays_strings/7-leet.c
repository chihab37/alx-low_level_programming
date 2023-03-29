#include "main.h"
/**
  *leet - function that encodes a string into 1337
  *@str: the string
  *Return: return the changed string
  */
char *leet(char *str)
{
	int i, j;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s1[j] == str[i])
			{
				str[i] = s2[j];
			}
		}
	}
	return (str);
}
