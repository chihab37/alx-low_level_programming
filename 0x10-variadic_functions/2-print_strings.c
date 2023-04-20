#include "variadic_functions.h"
#include <string.h>
/**
  *print_strings - a function that prints strings
  *@separator: separates strings printed
  *@n: number of string passed to the func
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *str;
	va_list args;

	if (separator == NULL)
		separator = "";

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(args, char*);
	if (str != NULL)
		printf("%s", str);
	else
		printf("(nil)");
	if (i < n - 1)
		printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
