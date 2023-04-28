#include "lists.h"
/**
  *pop_listint - deletes the head of the node
  *@head: a double pointer
  *Return: NULL if failure
  */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	start == *head;
	*head = start->next;
	n = start->next;
	free(start);
	return (n);
}
