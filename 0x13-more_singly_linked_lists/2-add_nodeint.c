#include "lists.h"

/**
 *add_nodeint - Function to establish a new node at bgng
 *@head: A pointer to the address of the head of the listint_t list
 *@n: the integer for the new node to contain
 *Return: NULL if function fails
 *Or address of element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
