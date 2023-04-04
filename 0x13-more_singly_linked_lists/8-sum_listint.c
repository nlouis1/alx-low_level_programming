#include "lists.h"

/**
 *sum_listint - A function to calculate the sum
 *@head: the beginning of the list
 *
 *Return: sum of the number(when success)
 */

int sum_listint(listint_t *head)
{
listint_t *cursor = head;
size_t sumation = 0;

while (cursor != NULL)
{
sumation += cursor->n;
cursor = cursor->next;
}
return (sumation);
}
