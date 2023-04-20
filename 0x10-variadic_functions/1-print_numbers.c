#include "variadic_functions.h"
#include <string.h>
/**
  *print_numbers - a function that prints numbers
  *@separator: string to be printed between numbers
  *@n: number of ints passed to the func
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL)
		separator = "";
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
