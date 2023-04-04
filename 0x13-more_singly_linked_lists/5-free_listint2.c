#include "lists.h"

/**
*free_listint2 - remove element from a list
*@head: pointing to the head of the list
*Return: void(no return type)
*/

void free_listint2(listint_t **head)
{
listint_t *pointing;
listint_t **temp = head;

if (temp != NULL)
{
while (*head != NULL)
{
pointing = *head;
free(pointing);
*head = (*head)->next;
}

*temp = NULL;

}
}
