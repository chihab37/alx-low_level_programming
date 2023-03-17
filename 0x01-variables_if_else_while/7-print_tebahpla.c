#include <stdio.h>
/**
 *main -main
 *Return: 0
 */
int main(void)
{
	char num = 'z';
	int i = 0;

	for (i = 0; i < 26; i++)
{
	putchar(num);
	num--;
}
	putchar('\n');
return (0);
}
