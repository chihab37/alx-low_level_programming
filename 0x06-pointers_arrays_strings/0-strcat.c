#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2;

	len1 = 0;
	while (dest[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (dest[len1] != '\0')
	{
		dest[len1] = src[len2];
		len1++;
		len2++;
	}
	dest[len1] = '\0';
return (dest);
}
