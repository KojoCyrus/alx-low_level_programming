#include "lists.h"

/**
*free_listint2 - a function that frees a listint_t list.
*@head: is a pinter to the lest we are going to free
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp  = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
