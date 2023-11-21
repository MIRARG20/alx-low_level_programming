#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at
 * a given position in a linked list
 * @head: double pointer to the head of the list.
 * @idx: index of the list where the new node should be added.
 * @n: data of the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node;
listint_t *current;
unsigned int i;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

current = *head;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
}
else
{
for (i = 0; i < idx - 1; i++)
{
if (current == NULL)
{
free(new_node);
return (NULL);
}
current = current->next;
}

new_node->next = current->next;
current->next = new_node;
}

return (new_node);
}
