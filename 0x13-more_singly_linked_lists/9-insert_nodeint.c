#include "lists.h"

/**
 * insert_nodeint_at_index - A function that gives nth number in a node
 * @head: pointer to the head of a list
 * @idx: index of the node to be added
 * @n: content of the new node integer
 * Return: the address of the node in a list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL;
	listint_t *previous_node = NULL;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || idx > listint_len(*head))
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	while (head != NULL)
	{
		if (i == idx)
		{
			if (i == 0)
			{
				new_node->next = *head;
				*head = new_node;
				return (new_node);
			}
			new_node->next = previous_node->next;
			previous_node->next = new_node;
			return (new_node);
		}
		else if ((i + 1) == idx)
			previous_node = *head;
		head = &((*head)->next);
		i++;
	}
	return (NULL);
}

/**
 * listint_len - Number of nodes in A linked list
 * @h: top of the list
 *
 * Return: total number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t number = 0;

	while (cursor != NULL)
	{
		number += 1;
		cursor = cursor->next;
	}
	return (number);
}
