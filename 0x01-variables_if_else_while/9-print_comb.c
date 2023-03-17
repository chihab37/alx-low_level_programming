#include <stdio.h>
/**
  *main - prints all possible
  *Return: 0 success
  */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
	{
	putchar('0' + i);
	if (i < 9)
	{
	putchar(',');
	putchar(' ');
	continue;
	}
	}
putchar('\n');
return (0);
}
