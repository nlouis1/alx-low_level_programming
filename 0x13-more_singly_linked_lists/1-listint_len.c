#include "lists.h"

/**
 *listint_len - Returns the number of lists
 *@h: A pointer to another next node
 *Return: the number of nodes in a list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodesIndex = 0;

	while (h)
	{
		nodesIndex++;
		h = h->next;
	}
	return (nodesIndex);
}
