#include <stdio.h>
/**
  *main - print alphabets in lowercase & uppercase with only putchar
  *Return: 0 success
  */
int main(void)
{
	char let = 'a';
	char lett = 'A';

	while
	(let <= 'z')
{
	putchar(let);
	let++;
}
	while
	(lett <= 'Z')
{
	putchar(lett);
	lett++;
}
	putchar('\n');
return (0);
}
