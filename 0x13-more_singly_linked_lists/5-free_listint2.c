#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * and sets the head to NULL
 * @head: singly linked list.
 */
void free_listint2(listint_t **head)
{
listint_t *tmp;
while (*head != NULL)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
}
*head = NULL;
}
