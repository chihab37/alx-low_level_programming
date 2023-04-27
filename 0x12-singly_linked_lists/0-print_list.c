#include "main.h"
/**
  *print_list - prints all elements of a list_t list
  *@h: pointer to the of the list
  *Return: number of nodes in the list_t list
  */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("%s\n", h->str);
		else
			printf("[0] (nil)\n");

		count++;
		h = h->next;
	}
	return (count);
}
