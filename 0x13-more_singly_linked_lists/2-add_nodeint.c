#include "lists.h"

/**
*add_nodeint - a function that adds a new node at
*the beginning of a listint_t list.
*@head: is a pointer at the beginning f the list
*@n: this is the data we will be inserting in the new node
*
*Return: should return the pointer to a new node
*else should return NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
