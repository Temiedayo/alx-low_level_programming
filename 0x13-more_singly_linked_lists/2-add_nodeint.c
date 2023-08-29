#include "lists.h"
/**
 * add_nodeint - Adds new nodes at the beginning of a linked list.
 * @n: Data to insert in that node
 * @head: Pointer to first node in the list
 *
 * Return: Pointer to new node, OR NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
