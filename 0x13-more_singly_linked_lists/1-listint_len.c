#include "lists.h"

/**
*listint_len - a function that returns the number
*of elements in a linked listint_t lis
*@h: linked list to be traversed
*
*Return: should return the number nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
