#include <stdio.h>
/**
  *main - mainfunction
  *Return: 0 success
  */
int main(void)
{
	char num = '0';
	char let = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(num);
		num++;
	}
	while (let <= 'f')
	{
		putchar(let);
		let++;
	}
	putchar('\n');
return (0);
}
