#include "lists.h"

/**
*get_nodeint_at_index - a function that returns the
*nth node of a listint_t linked list.
*@head: a pointer
*@index:this is an index
*
*Return: should return the pointer to the node we're looking for
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
