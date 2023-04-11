#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  *count_words - Counts the number of words in a string
  *@str: The string to count words in
  *Return: The number of words in the string
  */
int count_words(char *str)
{
	int count, i, len;

	count = 0;
	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	}
	return (count);
}

/**
  *word_len - length of a word
  *@str: string
  *Return: length of the word
  */

int word_len(char *str)
{
	int len = 0;

	while (str[len] != ' ' && str[len] != '\0')
		len++;

	return (len);
}

/**
  *cut_str - cuts a string into words
  *@str: the string
  *@countw: number of words
  *Return: array of strings words
  */

char **cut_str(char *str, int countw)
{
	char **s;
	int i, j, k, len;

	s = malloc((countw + 1) * sizeof(char *));
	if (s == NULL)
		return (NULL);

	for (i = 0, j = 0; i < countw; i++)
	{
		while (str[j] == ' ')
			j++;

		len = word_len(&str[j]);
		s[i] = malloc(len + 1);
		if (s[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(s[k]);

			free(s);
			return (NULL);
		}
		for (k = 0; k < len; k++)
			s[i][k] = str[j + k];
		s[i][len] = '\0';

		j += len;
	}
	s[countw] = NULL;

	return (s);
}

/**
  *strtow - splits a string into words
  *@str: the string
  *Return: NULL if str == NULL or str == "" or failure.
  *a pointer to an array of strings if success
  */
char **strtow(char *str)
{
	char **s;
	int countw;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	countw = count_words(str);

	s = cut_str(str, countw);

	return (s);
}
