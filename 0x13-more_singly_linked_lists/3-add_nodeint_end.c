#include "lists.h"
/**
 * add_nodeint_end - Adds node at the end of a linked list.
 * @n: Data to insert in new element.
 * @head: Pointer to first element in the list
 *
 * Return: Pointer to new node, or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *temp = *head;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (temp->next)
temp = temp->next;
temp->next = new;
return (new);
}
