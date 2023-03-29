#include "main.h"
/**
  *_strncat - concatenates two strings
  *@dest: 1st string
  *@src: 2nd string
  *@n: most bytes from src
  *Return: string
  */
char *_strncat(char *dest, char *src, int n)
{
	int len1, len2;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	{
		continue;
	}
	for (len2 = 0; len2 < n && src[len2] != '\0'; len2++)
	{
		dest[len1 + len2] = src[len2];
	}
dest[len1 + len2] = '\0';
return (dest);
}
