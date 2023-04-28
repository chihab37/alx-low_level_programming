#include "lists.h"
/**
  *listint_len - number of elements in a linstin list
  *@h: head pointer
  *Return: number of elements
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
