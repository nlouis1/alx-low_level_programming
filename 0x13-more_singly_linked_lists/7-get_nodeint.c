#include "lists.h"

/**
*get_nodeint_at_index - A function to display nth node
*@head: pointer to the top list
*@index: counter of the required node
*
*Return: the address of the node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *cursor = NULL;
unsigned int i = 0;

while (head != NULL)
{
if (i <= index)
{
if (i == index)
{
cursor =  head;
break;
}
head = head->next;
i++;
}
else
return (NULL);
}
return (cursor);
}
