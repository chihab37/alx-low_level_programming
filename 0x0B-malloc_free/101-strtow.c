#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words in
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (*str != ' ' && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (*str == ' ')
		{
			in_word = 0;
		}
		str++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, k;
	int num_words;
	char **words;
	char *word_start;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);
	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	i = 0;
	while (*str)
	{
		if (*str != ' ')
		{
			word_start = str;
			while (*str != ' ' && *str != '\0')
				str++;
			words[i] = malloc((str - word_start + 1) * sizeof(char));
			if (words[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}
			for (k = 0; word_start + k < str; k++)
				words[i][k] = word_start[k];
			words[i][k] = '\0';
			i++;
		}
		else
			str++;
	}
	words[num_words] = NULL;
	return (words);
}
