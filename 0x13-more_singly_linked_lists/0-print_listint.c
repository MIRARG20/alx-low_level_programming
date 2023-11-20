#include "lists.h"
/**
 * print_listint - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("%d", h->n);
h = h->next;
count++;
}
printf("\n");
return (count);

}
