#include "main.h"
/**
  *_strncat - concatenates two strings
  *@dest: 1st string
  *@src: 2nd string
  *@n: most bytes from src
  */
char *_strncat(char *dest, char *src, int n)
{
	int len1, len2;

	len1 = 0;
	while (dest[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (len2 < n && src[len2] != '\0')
	{
		dest[len1] = src[len2];
		len2++;
		len1++;
	}
return (dest);
}
