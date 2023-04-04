#include "lists.h"
/**
*free_listint - release a linked list
*@head: the beginning of a list
*Return: void(no return type"
*/

void free_listint(listint_t *head)
{
listint_t *temporaly;

while (head != NULL)
{
temporaly = head;
head = head->next;
free(temporaly);
}
}
