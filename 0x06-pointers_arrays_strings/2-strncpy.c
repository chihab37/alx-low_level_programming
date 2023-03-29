#include "main.h"
/**
  *_strncpy - copies a sting
  *@dest: pasted string
  *@src: copied string
  *@n: number of byts copied
  *Return: string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
