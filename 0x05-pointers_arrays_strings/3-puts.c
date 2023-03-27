#include "main.h"

/**
  *_puts - prints a string
  *@str: the string
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
