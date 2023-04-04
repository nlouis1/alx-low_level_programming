#include "lists.h"

/**
*pop_listint - A function to remove and delete 
the head node of a linked list
*@head: head of the list
*Return: the deleted node data
*/

int pop_listint(listint_t **head)
{
listint_t *popped;
int description;

if (*head == NULL)
return (0);

popped = *head;
description = popped->n;
free(popped);

*head = (*head)->next;
return (description);

}
