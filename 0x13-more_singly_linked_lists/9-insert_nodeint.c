#include "lists.h"

/**
*insert_nodeint_at_index - a function that inserts a new node
*at a given position.
*@head: is a pointer
*@idx: index
*@n: this is the data we're going to insert
*
*Return: should retun a pointer to th enew node or null
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
		temp = temp->next;
	}
	return (NULL);
}

