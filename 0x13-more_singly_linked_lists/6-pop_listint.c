#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: double pointer to the head of the list.
 * Return: the data of the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
int data = 0;

if (*head != NULL)
{
data = (*head)->n;
*head = (*head)->next;
free(*head);
}

return (data);
}
