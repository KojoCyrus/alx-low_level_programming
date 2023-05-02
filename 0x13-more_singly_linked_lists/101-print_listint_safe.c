#include "lists.h"

/**
*print_listint_safe - a function that prints a listint_t linked list.
*@head: pointer
*
*Return: should return the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *next = NULL;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		next = current->next;
		if (next >= current)
		{
			printf("-> [%p] %d\n", (void *)next, next->n);
				break;
		}
		current = next;
	}
	return (count);
}
