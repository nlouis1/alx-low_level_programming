#include "lists.h"

/**
*pop_listint - A function to remove and delete 
the head node of a linked list
*@head: head of the list
*Return: the deleted node data
*/
int pop_listint(listint_t **head)
{
	int noden;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	noden = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (noden);
}
