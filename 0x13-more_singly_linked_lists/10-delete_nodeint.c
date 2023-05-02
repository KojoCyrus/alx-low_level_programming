#include "lists.h"

/**
*delete_nodeint_at_index - a function that deletes the node at
*index index of a listint_t linked list.
*@head: a pointer
*@index: an index of the node
*
*Return: should return 1 when successfule, if not, -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *prev;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
			return (1);
	}
	prev = NULL;

	for (i = 0; i < index && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);

	return (1);
}

