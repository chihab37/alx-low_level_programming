#include "main.h"
/**
  *string_toupper - changes all lowercase letters to uppercase
  *@str: the string
  *Return: the string in uppercase
  */
char *string_toupper(char *str)
{
	int i, len;

	len = 0;
	i = 0;
	while (str[len] != '\0')
		len++;
	while (i < len)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] -= ' ';
		}
		i++;
	}
	return (str);
}
