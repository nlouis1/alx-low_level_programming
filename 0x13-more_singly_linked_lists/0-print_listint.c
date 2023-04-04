#include "lists.h"

/**
 * print_listint - displaying all lists that are here
 * @h: the beginning of the list
 *
 * Return: return the number of nodes
 */
size_t print_listint(const listint_t *h)
{
const listint_t *cursor = h;
size_t counter = 0;

while (cursor != NULL)
{
printf("%d\n", cursor->n);
counter += 1;
cursor = cursor->next;
}
return (counter);
}
