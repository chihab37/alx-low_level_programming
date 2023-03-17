#include <stdio.h>
/**
  *main - prints alphabet in lowercase using putchar
  *Return: 0 success
  */
int main(void)
{
char let = 'a';
while (let <= 'z')
{
	putchar(let);
let++;
}
putchar('\n');
return (0);
}
