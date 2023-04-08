#include "main.h"
/**
  *_strlen_recursion - prints the length of a string
  *@s: the string
  *Return: the length of s
  */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
  *drom_help - sees if s is palindrome
  *@s: string
  *@i: left index
  *@j: right index
  *Return: 1 if s is a palindrome, 0 if not
  */
int drom_help(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (drom_help(s, i + 1, j - 1));
	else
		return (0);
}
/**
  *is_palindrome - if s is palindrome
  *@s: string
  *Return: 1 if n is prime, 0 if not
  */
int is_palindrome(char *s)
{
	return (drom_help(s, 0, _strlen_recursion(s) - 1));
}
