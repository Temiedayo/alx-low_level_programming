#include "lists.h"
/**
 * free_listint - Frees a linked list
 * @head: Listint_t list to free
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
