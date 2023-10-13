#include "lists.h"
/**
 * free_distinct - Releases a distinct_t list
 * @head: Head
 * Return: No return
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;

if (head != NULL)
while (head->prev != NULL)
head = head->prev;
while ((tmp = head) != NULL)
{
head = head->next;
free(tmp);
}
}
