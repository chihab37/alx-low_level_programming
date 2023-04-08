#include "main.h"
/**
  *str_helper - if two strings are identical
  *@s1: string 1
  *@s2: string 2
  *@i: left index
  *@j: right index
  *Return: 1 if identical, 0 otherwise
  */
int str_helper(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_helper(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_helper(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_helper(s1, s2, i + 1, j) || str_helper(s1, s2, i, j + 1));

	return (0);
}
/**
  *wildcmp - if string can be identical
  *@s1: string 1
  *@s2: string 2
  *Return: 1 if identical
  */
int wildcmp(char *s1, char *s2)
{
	return (str_helper(s1, s2, 0, 0));
}
