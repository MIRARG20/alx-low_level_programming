#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index in a linked list
 * @head: double pointer to the head of the list.
 * @index: index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current;
listint_t *prev;
unsigned int i;

if (head == NULL)
return (-1);

current = *head;

if (index == 0)
{
*head = current->next;
free(current);
return (1);
}

for (i = 0; i < index - 1; i++)
{
if (current == NULL)
return (-1);
prev = current;
current = current->next;
}

if (current == NULL)
return (-1);

prev->next = current->next;
free(current);

return (1);
}
