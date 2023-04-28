#include <stdlib.h>
#include "lists.h"

/**
*list_len - a function that returns the
*number of eleemnts in a linked list
*@h: is a pounter
*
*Return: should return the number of elements in h
*/
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
