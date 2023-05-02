#include "lists.h"

/**
*free_listint_safe - a function that frees a listint_t list.
*@h: a pointer
*
*Return: the size of the list that was free’d
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t cnt = 0;

	if (h == NULL)
		return (0);

	current = *h;
	*h = NULL;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		cnt++;

		if (next >= current)
			break;

		current = next;
	}
	return (cnt);

}
